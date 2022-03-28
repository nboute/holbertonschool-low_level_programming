#include "main.h"

/**
 * read_textfile - Reads and prints part of a file to stdout
 * @filename: Path of file to read/print
 * @letters: Number of characters to read/print
 * Return: Number of bytes written, or 0 if error
 */
ssize_t		read_textfile(const char *filename, size_t letters)
{
	char	*buff;
	int		ret, wrret, fd;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(letters + 1);
	if (!buff)
		return (0);
	ret = read(fd, buff, letters);
	close(fd);
	if (ret == -1)
	{
		free(buff);
		return (0);
	}
	buff[ret] = '\0';
	if (write(STDOUT_FILENO, buff, ret) != ret)
		return (0);
	return (ret);
}
