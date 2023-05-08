#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <errno.h>

void print_error(char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

int main(int argc, char **argv) {
    int fd;
    Elf64_Ehdr header;
    char *filename;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);

    if (fd < 0) {
        perror("Cannot open file");
        exit(1);
    }

    /* Read the ELF header */
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Cannot read ELF header");
    }

    /* Print the bytes of the magic number in hexadecimal format */
    printf("Magic: %02x %02x %02x %02x\n", header.e_ident[0], header.e_ident[1], header.e_ident[2], header.e_ident[3]);
    printf("\n");

    /* Print the other fields of the ELF header */
    printf("Class: %d\n", header.e_ident[4]);
    printf("Data: %d\n", header.e_ident[5]);
    printf("Version: %d\n", header.e_ident[6]);
    printf("OS/ABI: %d\n", header.e_ident[7]);
    printf("ABI Version: %d\n", header.e_ident[8]);
    printf("Type: %d\n", header.e_type);
    printf("Entry point address: %lx\n", header.e_entry);

    close(fd);
    return (0);
}
