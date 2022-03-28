#include "main.h"
#include <stdio.h>

/**
 * print_error - Prints string depending on error code
 * @code: Error code
 * @filename: Name of file to print for certain errors
 * @fd: fd to print for certain errors
 * Return: Error code
 */
int		print_error(error_t code, char *filename, int fd)
{
	if (code == ERR_USAGE)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (code == ERR_READ)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else if (code == ERR_WRITE)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	else if (code == ERR_CLOSE)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (code);
}

/**
 * copy_file - Copies content of one file to another
 * @file_from: Name of file to copy from
 * @file_to: Name of file to copy to
 * Return: 0 if success, or a specific code if error
 */
int		copy_file(char *file_from, char *file_to)
{
	int		ret, wret, fd1 = 0, fd2 = 0;
	char	buff[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
		return (print_error(ERR_READ, file_from, 0));
	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
		return (print_error(ERR_WRITE, file_to, 0));
	while ((ret = read(fd1, buff, 1024)) > 0)
	{
		if (ret)
		{
			wret = write(fd2, buff, ret);
			if (wret != ret)
				return (print_error(ERR_WRITE, file_to, 0));
		}
	}
	if (ret == -1)
		return (print_error(ERR_READ, file_from, 0));
	ret = close(fd1);
	wret = close(fd2);
	if (ret)
		return (print_error(ERR_CLOSE, NULL, fd1));
	if (wret)
		return (print_error(ERR_CLOSE, NULL, fd2));
	return (0);
}

/**
 * main - Calls copy function
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: 0 if success, or a specific code if error
 */
int		main(int ac, char **av)
{
	if (ac != 3)
		return (print_error(ERR_USAGE, NULL, 0));
	return (copy_file(av[1], av[2]));
}
