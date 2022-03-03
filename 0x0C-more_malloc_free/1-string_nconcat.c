#include <stdlib.h>


/**
 * _strncat - concatenates two strings, up to n characters from src
 * @dest: string to append to
 * @src: string to append to dest
 * @n: number of characters to append
 * Return: dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	char	*str;

	str = dest;
	while (*dest)
		dest++;
	while (n-- && *src)
		*dest++ = *src++;
	if (n)
		*dest = '\0';
	return (str);
}

/**
 * _strlen - Counts size of a string
 * @str: String to check size of
 * Return: Returns size of str
 */
int	_strlen(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - Copy string's content into another
 * @dest: String to copy into
 * @src: string to copy from
 * Return: Returns string where content was pasted
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
 * string_nconcat - Concats two string, up to n characters from @s2
 * @s1: First string to concat
 * @s2: Second string to concat
 * @n: number of characters to cat from s2
 * Return: A string containing both @s1 and @s2, or NULL if error
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char	*str;
	size_t	len1 = 0, len2 = 0;

	if (s1)
		len1 = _strlen(s1);
	if (s2)
	{
		len2 = _strlen(s2);
		if (n < len2)
			len2 = n;
	}
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	*str = '\0';
	if (s1)
		_strcpy(str, s1);
	if (s2)
		_strncat(str, s2, n);
	str[len1 + len2] = '\0';
	return (str);
}
