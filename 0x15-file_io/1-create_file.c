#include "main.h"

/**
 * _strlen - counts size of a string
 * @str: string to check size of
 * Return: returns size of str
 */
ssize_t		_strlen(char *str)
{
	ssize_t	i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * create_file - Creates file and writes string to it
 * @filename: Name of file
 * @text_content: Content to write into file
 * Return: 1 if success, -1 if error
 */
int			create_file(const char *filename, char *text_content)
{
	int		fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		len = _strlen(text_content);
		if (len && write(fd, text_content, len) != len)
			return (-1);
	}
	close(fd);
	return (1);
}
