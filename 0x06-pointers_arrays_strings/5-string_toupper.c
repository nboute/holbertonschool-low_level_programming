/**
 * string_toupper - capitalizes all letters of a string
 * @s: string
 * Return: s
 */
char	*string_toupper(char *s)
{
	int	i;

	for (i = 0; s[i]; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	return (s);
}
