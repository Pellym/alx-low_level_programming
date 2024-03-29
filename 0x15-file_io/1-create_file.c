#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename -  filename is the name of the file to create
 * @text_content: text to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	 int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	 if (filename == NULL)
		 return (-1);

	 if (fd == -1)
		 return (-1);

	 if (text_content != NULL)
	 {
		 size_t len = 0;
		 while (text_content[len] != '\0')
			 len++;

		 if (write(fd, text_content, len) == -1)
		 {
			 close(fd);
			 return (-1);
		 }
	 }
	 close(fd);
	 return (1);
}
