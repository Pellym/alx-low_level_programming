#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <errno.h>

/**
 * ELF - displays the information contained
 * in the ELF header at the start of an ELF file
 * Format: the same as readelf -h (version 2.26.1)
 * If the file is not an ELF file, or on error, exit with status code 98
 * display a comprehensive error message to stderr
 */
void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;
	char *filename;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Cannot open file");
		exit(98);
	}

	/* Read the ELF header */
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Cannot read ELF header");
	}

	/* Print the bytes of the magic number in hexadecimal format */
	printf("Magic: %02x %02x %02x %02x\n", header.e_ident[0], \
		header.e_ident[1], header.e_ident[2], header.e_ident[3]);
	printf("\n");
	/* Print the other fields of the ELF header */
	printf("Class: %d\n", header.e_ident[EI_CLASS]);
	printf("Data: %d\n", header.e_ident[EI_DATA]);
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: %lx\n", header.e_entry);

	if (close(fd) == -1)
	{
		perror("Cannot close file");
	}
	return (0);
}
