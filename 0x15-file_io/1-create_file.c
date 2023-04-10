#include "main.h"
#include <fcntl.h>

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
	int *a = 0;
       	int b = 0;
	int c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	a = popen;
	b = fwrite(a, text_content, c);

	if (a == -1 || b == -1)
		return (-1);

	pclose(a);

	return (1);
}
