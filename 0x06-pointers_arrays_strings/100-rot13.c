/**
 * rot13 - does a rot13 on given string
 * @s: string to rot13 onto
 * Return: s
 */
char	*rot13(char *s)
{
	char	alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	alpharot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int		i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = alpharot[j];
				break;
			}
		}
	}
	return (s);
}
