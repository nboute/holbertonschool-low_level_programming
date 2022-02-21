char	*_strstr(char *haystack, char *needle)
{
	int	i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
	}
	return (0x0);
}
