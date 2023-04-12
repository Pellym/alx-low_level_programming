#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
 *  displays the information contained in the ELF header at the start of an ELF file.
 *  Usage: elf_header elf_filename
 *  Format: the same as readelf -h (version 2.26.1)
 *  If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr
 */

int elf_header(char* elf_filename, void (*print_error)(char *message)) {

	 int fd, i;

    Elf64_Ehdr header;

    if (elf_filename == NULL) {
        print_error("Error: Invalid filename\n");
        return -1;
    }

    if ((fd = open(elf_filename, O_RDONLY)) == -1) {
        print_error("Error: Failed to open file\n");
        return -1;
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Error: Failed to read header\n");
        close(fd);
        return -1;
    }

    close(fd);

    printf("ELF Header:\n");
    printf("  Magic:   ");
    while (i < EI_NIDENT) {
        printf("%02x ", header.e_ident[i]);
	i++;
    }
    printf("\n");

    printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

    return 0;
}
