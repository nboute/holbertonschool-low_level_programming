/**
 * cap_string - capitalizes words of a string
 * @s: string to capitalize
 * Return: s
 */
char	*cap_string(char *s)
{
	int	i, word;

	word = 1;
	for (i = 0; s[i]; i++)
	{
		if (word == 1 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
		|| s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')'
		|| s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == '\t'
		|| s[i] == '\n')
			word = 1;
		else
			word = 0;
	}
	return (s);
}
