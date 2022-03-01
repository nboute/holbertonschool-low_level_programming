#include <stdlib.h>

/**
 * _strcpy - copy string's content into another
 * @dest: string to copy into
 * @src: string to copy from
 * Return: returns string where content was pasted
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - counts size of a string
 * @str: string to check size of
 * Return: returns size of str
 */
int	_strlen(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * _strdup - Creates a duplicate of a given string
 * @str: String to duplicate
 * Return: Duplicate of @str
 */
char	*_strdup(char *str)
{
	size_t	len;
	char	*dup;

	len = _strlen(str);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	return (_strcpy(dup, str));
}
