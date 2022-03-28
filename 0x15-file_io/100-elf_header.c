#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from a buffer to another
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 * Return: Destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	long	*ldest, *lsrc;
	char	*ptr;
	unsigned int	size;

	ldest = (long *)dest;
	lsrc = (long *)src;
	size = sizeof(long);
	while (n >= size)
	{
		*ldest++ = *lsrc++;
		n -= size;
	}
	ptr = (char *)ldest;
	src = (char *)lsrc;
	while (n--)
		*ptr++ = *src++;
	return (dest);
}


/**
 * rev_mem - reverses memory
 * @ptr: memory to reverse
 * @size: range of memory
 */
void	rev_mem(char *ptr, size_t size)
{
	size_t		i;
	char	tmp;

	i = 0;
	while (--size > i)
	{
		tmp = ptr[size];
		ptr[size] = ptr[i];
		ptr[i] = tmp;
		i++;
	}
}
/**
 * print_error - Prints string depending on error code
 * @code: Error code
 * @filename: Name of file to print for certain errors
 * Return: 98
 */
int		print_error(error_t code, char *filename)
{
	if (code == ERR_USAGE)
		dprintf(STDERR_FILENO, "Usage: readelf elf-file\n");
	else if (code == ERR_READ)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else if (code == ERR_ELF)
		dprintf(STDERR_FILENO, "Error: File %s is not an ELF file\n", filename);
	else if (code == ERR_HEADER)
		dprintf(STDERR_FILENO, "Error: Invalid ELF Header\n");
	return (98);
}

/**
 * print_type - Prints corresponding filetype
 * @type: filetype
 */
void	print_type(unsigned short type)
{
	if (type == 0x00)
		printf("NONE (Unknown)");
	if (type == 0x01)
		printf("REL (Relocatable file)");
	if (type == 0x02)
		printf("EXEC (Executable file)");
	if (type == 0x03)
		printf("DYN (Shared object file)");
	if (type == 0x04)
		printf("CORE (Core file)");
	if (type == 0xFE00)
		printf("LOOS (Reserved inclusive range. Operating system specific)");
	if (type == 0xFEFF)
		printf("HIOS (Reserved inclusive range. Operating system specific)");
	if (type == 0xFF00)
		printf("LOPROC (Reserved inclusive range. Processor specific)");
	if (type == 0xFFFF)
		printf("HIPROC (Reserved inclusive range. Processor specific)");
}

/**
 * print_abi - Prints name of interface
 * @abi: Interface
 */
void	print_abi(unsigned char abi)
{
	if (abi == 0x00)
		printf("UNIX - System V");
	else if (abi == 0x01)
		printf("UNIX - HP-UX");
	else if (abi == 0x02)
		printf("UNIX - NetBSD");
	else if (abi == 0x03)
		printf("UNIX - Linux");
	else if (abi == 0x04)
		printf("UNIX - GNU Hurd");
	else if (abi == 0x06)
		printf("UNIX - Solaris");
	else if (abi == 0x07)
		printf("UNIX - AIX");
	else if (abi == 0x08)
		printf("UNIX - IRIX");
	else if (abi == 0x09)
		printf("UNIX - FreeBSD");
	else if (abi == 0x0A)
		printf("UNIX - Tru64");
	else if (abi == 0x0B)
		printf("UNIX - Novell Modesto");
	else if (abi == 0x0C)
		printf("UNIX - OpenBSD");
	else if (abi == 0x0D)
		printf("UNIX - OpenVMS");
	else if (abi == 0x0E)
		printf("UNIX - NonStop Kernel");
	else if (abi == 0x0F)
		printf("UNIX - AROS");
	else if (abi == 0x10)
		printf("UNIX - Fenix OS");
	else if (abi == 0x11)
		printf("UNIX - CloudABI");
	else if (abi == 0x12)
		printf("UNIX - Stratus Technologies OpenVOS");
	else
		printf("<unknown: %hu>", abi);
}

/**
 * print_header - Prints elf header
 * @header: Struct containing header data
 * Return: 0 if Success
 */
int		print_header(elf_header_t *header)
{
	int	i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		if (i)
			printf(" ");
		printf("%.2hx", header->magic[i]);
	}
	printf("\n  %-35s", "Class:");
	if (header->class == 1)
		printf("ELF32");
	else if (header->class == 2)
		printf("ELF64");
	printf("\n  %-35s", "Data:");
	if (header->data == 1)
		printf("2's complement, little endian");
	else if (header->data == 2)
		printf("1's complement, big endian");
	printf("\n  %-35s", "Version:");
	printf("%d (current)", header->version);
	printf("\n  %-35s", "OS/ABI:");
	print_abi(header->os_abi);
	printf("\n  %-35s", "ABI Version:");
	printf("%hu", header->os_abi_ver);
	printf("\n  %-35s", "Type:");
	print_type(header->type);
	printf("\n  %-35s", "Entry point address:");
	if (header->class == 1)
		printf("%#x\n", (unsigned int)header->entry);
	else
		printf("%#lx\n", header->entry);
	return (0);
}

/**
 * read_header - Stores ELF header data into struct
 * @ptr: Pointer to ELF header
 * @header: Struct to store ELF header data
 * Return: 0 if success
 */
int		read_header(char *ptr, elf_header_t *header)
{
	header->data = *ptr++;
	if (header->data != 1 && header->data != 2)
		return (print_error(ERR_HEADER, NULL));
	header->version = *ptr++;
	header->os_abi = *ptr++;
	header->os_abi_ver = *ptr++;
	ptr += 7;
	header->type = *(unsigned short *)ptr;
	ptr += 8;
	header->entry = *(unsigned long *)ptr;
	return (print_header(header));
}

/**
 * main - Reads and prints ELF header
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: 0 if success
 */
int		main(int ac, char **av)
{
	int		ret, fd;
	char	buff[30];
	elf_header_t	header;

	if (ac != 2)
		return (print_error(ERR_USAGE, NULL));
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (print_error(ERR_READ, av[1]));
	ret = read(fd, buff, 5);
	if (ret != 5)
		return (print_error(ERR_READ, av[1]));
	if (buff[0] != 0X7F || buff[1] != 0X45 || buff[2] != 0X4C
	|| buff[3] != 0X46)
		return (print_error(ERR_ELF, av[1]));
	header.class = buff[4];
	_memcpy(header.magic, buff, 5);
	if (header.class == 1)
	{
		ret = read(fd, buff, 27);
		if (ret != 27)
			return (print_error(ERR_READ, av[1]));
	}
	else if (header.class == 2)
	{
		ret = read(fd, buff, 35);
		if (ret != 35)
			return (print_error(ERR_READ, av[1]));
	}
	else
		return (print_error(ERR_HEADER, NULL));
	_memcpy(header.magic + 5, buff, 11);
	return (read_header((char *)buff, &header));
}
