/**
 * wildcmp - Compares two string, with potential wildcards in the second
 * @s1: First string - no wildcards
 * @s2: Second string - can have wildcards
 * Return: 1 if they can be considered identical, 0 if not
 */
int		wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (!*s1 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) | wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
