#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 *         0 if the file could not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE *fptr;
        char buffer[1024];
        size_t count;

        fptr = fopen(filename, "r");
        if (fptr == NULL)
        {
                fprintf(stderr, "Error: Can't read from file %s\n", filename);
                return (0);
        }

        count = fread(buffer, sizeof(char), letters, fptr);
        if (count == 0)
        {
                fprintf(stderr, "Error: Can't read from file %s\n", filename);
                fclose(fptr);
                return (0);
        }

        if (fwrite(buffer, sizeof(char), count, stdout) != count)
        {
                fprintf(stderr, "Error: Can't write to stdout\n");
                fclose(fptr);
                return (0);
        }

        fclose(fptr);
        return (count);
}
