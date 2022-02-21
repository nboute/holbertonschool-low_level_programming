/**
 * _strstr - Searches for a substring in a string
 * @haystack: String to search into
 * @needle: Substring to find in @haystack
 * Return: Pointer to first occurence of @needle in @haystack
 */
char	*_strstr(char *haystack, char *needle)
{
	int	i, j;

	if (!*needle)
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
	}
	return (0x0);
}
