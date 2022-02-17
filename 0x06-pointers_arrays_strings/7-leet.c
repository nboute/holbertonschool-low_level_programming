
/**
 * replace - replaces occurences of a and b by c in a string
 * @s: string
 * @a: first character to search
 * @b: second character to search
 * @c: character to replace with
 */
void	replace(char *s, char a, char b, char c)
{
	while (*s)
	{
		if (*s == a || *s == b)
			*s = c;
		s++;
	}
}

/**
 * leet - leetifies a string, turning some letters into numbers
 * @s: string to modify
 * Return: s
 */

char	*leet(char *s)
{
	replace(s, 'a', 'A', '4');
	replace(s, 'e', 'E', '3');
	replace(s, 'o', 'O', '0');
	replace(s, 't', 'T', '7');
	replace(s, 'l', 'L', '1');
	return (s);
}
