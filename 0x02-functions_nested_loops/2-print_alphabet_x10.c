#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times to stdout
 *
 * Return: 0
 */

void	print_alphabet_x10(void)
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		i++;
	}
}
