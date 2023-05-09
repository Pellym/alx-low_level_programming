#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 *  copies the content of a file to another file
 *  Usage: cp file_from file_to
 *  where NAME_OF_THE_FILE is the first argument passed to your program
 *  NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
 *
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd_to, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	
	/* Check if an error occurred while reading the source file */
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Close the file descriptors */
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
