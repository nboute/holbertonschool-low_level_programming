#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - Concats two string in a newly allocated one
 * @s1: First string to concat
 * @s2: Second string to concat
 * Return: A string containing both @s1 and @s2
 */
char	*str_concat(char *s1, char *s2)
{
	char	*str;
	size_t	len1 = 0, len2 = 0;

	if (s1)
		len1 = _strlen(s1);
	if (s2)
		len2 = _strlen(s2);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	*str = '\0';
	if (s1)
		_strcpy(str, s1);
	if (s2)
		_strcat(str, s2);
	return (str);
}
