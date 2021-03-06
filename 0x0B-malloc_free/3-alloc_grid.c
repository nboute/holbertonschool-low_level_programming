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
void	tabdel(int **tab, int size)
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
 * alloc_grid - Allocates a two-dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: Newly allocated array
 */
int		**alloc_grid(int width, int height)
{
	int	**tab;
	int	i;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = malloc(sizeof(int *) * height);
	if (!tab)
		return (NULL);
	_memset((char *)tab, 0, sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (!tab[i])
		{
			tabdel(tab, height);
			return (NULL);
		}
		_memset((char *)tab[i], 0, width * sizeof(int));
	}
	return (tab);
}
