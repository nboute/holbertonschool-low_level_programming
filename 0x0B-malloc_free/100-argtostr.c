#include <stdlib.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append to dest
 * Return: dest
 */
char	*_strcat(char *dest, char *src)
{
	char	*str;

	str = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (str);
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
 * argstostr - Concatenates array of string in a single string
 * @ac: Number of strings in array
 * @av: Array of strings
 * Return: Newly created string of NULL if error
 */
char	*argstostr(int ac, char **av)
{
	int	i;
	size_t	len = 0;
	char	*str;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	*str = '\0';
	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}
	return (str);
}
