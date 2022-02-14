/**
 * rev_string - reverses string
 * @s: string to reverse
 */
void	rev_string(char *s)
{
	int		i, j;
	char	tmp;

	for (i = 0; s[i]; i++)
		;
	j = 0;
	while (--i > j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
