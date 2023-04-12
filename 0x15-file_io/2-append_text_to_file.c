#include "main.h"
#include <string.h>

/**
 * appends text at the end of a file.
 * filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

 int append_text_to_file(const char *filename, char *text_content)
{
	  FILE *fp;
    size_t b = 0;

    if (!filename)
        return (-1);

    fp = fopen(filename, "a");
    if (!fp)
        return (-1);

    if (text_content)
        b = fwrite(text_content, sizeof(char), strlen(text_content), fp);

    if (fclose(fp) != 0)
        return (-1);

    return (b == strlen(text_content) ? 1 : -1);
}
