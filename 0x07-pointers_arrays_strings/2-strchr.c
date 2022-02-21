char	*_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (!*s && c)
		return (0x0);
	return (s);
}
