#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void _read(int fd, char *buf, size_t count);
void _close(int fd);
void elf_magic(unsigned char *e_ident);
size_t elf_class(const unsigned char *buffer);
int elf_data(const unsigned char *buffer);
void elf_version(const unsigned char *buffer);
void elf_OSabi(const unsigned char *buffer);
void elf_abivers(const unsigned char *buffer);
void elf_type(const unsigned char *buf, int b_endian);
void elf_entry(const unsigned char *buf, size_t b_mode, int b_endian);

/**
 * main - copy a file's contents to another file
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: Always 0
 */
int main(int argc, const char *argv[])
{
	unsigned char buffer[18];
	unsigned int bit_mode;
	int b_endian;
	int fd;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	_read(fd, (char *) buffer, 18);

	elf_magic(buffer);
	bit_mode = elf_class(buffer);
	b_endian = elf_data(buffer);
	elf_version(buffer);
	elf_OSabi(buffer);
	elf_abivers(buffer);
	elf_type(buffer, b_endian);

	lseek(fd, 24, SEEK_SET);
	_read(fd, (char *) buffer, bit_mode / 8);

	elf_entry(buffer, bit_mode, b_endian);

	_close(fd);

	return (0);
}

/**
 * _read - read from a file and print an error message upon failure
 * @fd: the file descriptor to read from
 * @buf: the buffer to write to
 * @count: the number of bytes to read
 */
void _read(int fd, char *buf, size_t count)
{
	if (read(fd, buf, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(fd);
	exit(98);
}

/**
 * _close - close a file descriptor and print an error message upon failure
 * @fd: the file descriptor to close
 */
void _close(int fd)
{
	if (close(fd) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}

/**
 * elf_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void elf_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * elf_class - print ELF class
 * @buffer: the ELF header
 *
 * Return: bit
 */
size_t elf_class(const unsigned char *buffer)
{
	printf("  %-34s ", "Class:");

	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return (32);
}

/**
 * elf_data - print ELF data
 * @buffer: the ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */
int elf_data(const unsigned char *buffer)
{
	printf("  %-34s ", "Data:");

	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 * elf_version - print ELF version
 * @buffer: the ELF header
 */
void elf_version(const unsigned char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);

	if (buffer[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_OSabi - print ELF OS/ABI
 * @buffer: the ELF header
 */
void elf_OSabi(const unsigned char *buffer)
{
	const char *osabi_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (buffer[EI_OSABI] < 19)
		printf("%s\n", osabi_table[(unsigned int) buffer[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buffer[EI_OSABI]);
}

/**
 * elf_abivers - print ELF ABI version
 * @buffer: the ELF header
 */
void elf_abivers(const unsigned char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}

/**
 * elf_type - print ELF type
 * @buf: the ELF header
 * @b_endian: endianness (big endian if non-zero)
 */
void elf_type(const unsigned char *buf, int b_endian)
{
	char *t_table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (b_endian)
		type = 0x100 * buf[16] + buf[17];
	else
		type = 0x100 * buf[17] + buf[16];

	if (type < 5)
		printf("%s\n", t_table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * elf_entry - print entry point address
 * @buf: string containing the entry point address
 * @b_mode: bit mode (32 or 64)
 * @b_endian: endianness (big endian if non-zero)
 */
void elf_entry(const unsigned char *buf, size_t b_mode, int b_endian)
{
	int add_size = b_mode / 8;

	printf("  %-34s 0x", "Entry point address:");

	if (b_endian)
	{
		while (add_size && !*(buf))
			--add_size, ++buf;

		printf("%x", *buf & 0xff);

		while (--add_size > 0)
			printf("%02x", *(++buf) & 0xff);
	}
	else
	{
		buf += add_size;

		while (add_size && !*(--buf))
			--add_size;

		printf("%x", *buf & 0xff);

		while (--add_size > 0)
			printf("%02x", *(--buf) & 0xff);
	}

	printf("\n");
}
