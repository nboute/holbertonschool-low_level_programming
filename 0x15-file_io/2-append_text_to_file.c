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
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file to write into
 * @text_content: Content to append to file
 * Return: 1 is success, -1 if error
 */
int		append_text_to_file(const char *filename, char *text_content)
{
	int	fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
