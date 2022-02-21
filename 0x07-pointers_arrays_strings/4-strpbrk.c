/**
 * _strpbrk - Searches for any of the bytes of a substring in another string
 * @s: String to search into
 * @accept: Set of bytes to search
 * Return: Pointer to first match
 */
char	*_strpbrk(char *s, char *accept)
{
	int	i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] && accept[j] != s[i]; j++)
			;
		if (accept[j])
			return (s + i);
	}
	return (0x0);
}
