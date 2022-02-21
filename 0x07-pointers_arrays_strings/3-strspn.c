unsigned int	_strspn(char *s, char *accept)
{
	int	i, j;
	unsigned int	len;

	len = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] && accept[j] != s[i]; j++)
			;
		if (!accept[j])
			break;
		len++;
	}
	return (len);
}
