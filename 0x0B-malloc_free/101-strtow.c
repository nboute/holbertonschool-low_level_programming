#include <stdlib.h>

/**
 * _memset - Sets adress range to given byte value
 *
 * @s: adress of range
 * @b: byte value to use
 * @n: size of range
 * Return: pointer s to beginning of range
 */
char	*_memset(char *s, char b, unsigned int n)
{
		long	*lptr;
		char	*ptr;
		long	lb;
		unsigned int	size;

		lb = 0x0;
		lptr = (long *)s;
		size = sizeof(long);
		while (size--)
			lb = (lb << 8) + (b & 0xff);
		size = sizeof(long);
		while (n >= size)
		{
			*lptr++ = lb;
			n -= size;
		}
		ptr = (char *)lptr;
		while (n--)
			*ptr++ = b;
		return (s);
}

/**
 * tabdel - Frees two dimensional array assuming non void values are allocated
 * @tab: Two-dimensional array
 * @size: size of array
 */
void	tabdel(char **tab, int size)
{
	int	i;

	if (!tab)
		return;
	i = 0;
	while (i < size)
	{
		if (tab[i])
			free(tab[i]);
		i++;
	}
	free(tab);
}

/**
 * _strncpy - copies from one string to another, up to n characters
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of characters to copy;
 * Return: str
 */
char	*_strncpy(char *dest, char *src, int n)
{
	char	*str;

	str = dest;
	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (str);
}

/**
 * strtow - Separates words from string into array of strings
 * @str: String containing words
 * Return: Array of words, or NULL if error
 */
char	**strtow(char *str)
{
	int	i, j, nb_words, is_word;
	char	**tab;

	if (!str || !*str)
		return (NULL);
	nb_words = 0;
	is_word = 0;
	for (i = 0; str[i]; i++)
	{
		if (!is_word && str[i] != ' ')
		{
			is_word = 1;
			nb_words++;
		}
		else if (is_word && str[i] == ' ')
			is_word = 0;
	}
	tab = malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (NULL);
	_memset((char *)tab, 0, sizeof(char *) * (nb_words + 1));
	for (i = 0; i < nb_words; i++)
	{
		while (*str == ' ')
			str++;
		j = 0;
		while (str[j] != ' ')
			j++;
		tab[i] = malloc(j + 1);
		if (!tab[i])
		{
			tabdel(tab, nb_words);
			return (NULL);
		}
		_strncpy(tab[i], str, j);
		tab[i][j] = '\0';
		str += j;
	}
	return (tab);
}
