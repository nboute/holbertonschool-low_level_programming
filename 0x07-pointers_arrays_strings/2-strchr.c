/**
 * _strchr - find first occurence of a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to first occurence
 */
char	*_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (!*s && c)
		return (0x0);
	return (s);
}
