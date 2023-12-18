#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <elf.h>

/**
 * elf_header - Displays information contained in the ELF header of a file
 * @filename: Name of the ELF file
 * Return: 0 on success, 98 on error
 */
int elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr elf_header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", filename);
		return (98);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header from %s\n", filename);
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
		   elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3],
		   elf_header.e_ident[4], elf_header.e_ident[5], elf_header.e_ident[6], elf_header.e_ident[7],
		   elf_header.e_ident[8], elf_header.e_ident[9], elf_header.e_ident[10], elf_header.e_ident[11],
		   elf_header.e_ident[12], elf_header.e_ident[13], elf_header.e_ident[14], elf_header.e_ident[15],
		   elf_header.e_ident[16], elf_header.e_ident[17], elf_header.e_ident[18], elf_header.e_ident[19]);

	printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);

	close(fd);
	return (0);
}

/**
 * main - Entry point for ELF program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	return elf_header(argv[1]);
}

