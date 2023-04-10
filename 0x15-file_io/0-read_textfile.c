#include "main.h"
#include <stddef.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * reads a text file and prints it to the POSIX standard output.
 * letters is the number of letters it should read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 * Returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;

	char *buffer = (char*)malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL) {
        fclose(text);
        return 0;

	  if (filename == NULL) {
        return 0;
    }

    FILE *text = fopen(filename, "r");
    if (text == NULL) {
        return 0;
    }

     }

    ssize_t bytes_read = fread(buffer, sizeof(char), letters, text);
    if (bytes_read == 0 || ferror(text)) {
        free(buffer);
        fclose(text);
        return 0;
    }

    buffer[bytes_read] = '\0'; 

    ssize_t bytes_written = fwrite(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written != bytes_read) {
        free(buffer);
        fclose(text);
        return 0;
    }

    free(buffer);
    fclose(text);
    return bytes_read;
}
