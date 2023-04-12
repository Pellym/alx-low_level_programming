#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * function that creates a file.
 * filename is the name of the file to create and text_content is a NULL terminated string to write to the file
 * The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if text_content is NULL create an empty file
 *
 * Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
    FILE *a;
    int c = 0;

    if (!filename)
        return (-1);

    a = fopen(filename, "w");
    if (!a)
        return (-1);

    if (text_content)
    {
        while (text_content[c])
            c++;
        fwrite(text_content, sizeof(char), c, a);
    }

    fclose(a);

    return (1);
}
