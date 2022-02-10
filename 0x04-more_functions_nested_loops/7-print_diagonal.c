#include "main.h"

/**
 * print_diagonal - prints diagonal line on terminal
 *
 * @n: number of lines to print
 */

void	print_diagonal(int n)
{
	int	i;
	int	j;

	j = 0;
	if (n <= 0)
		_putchar('\n');
	while (n > 0 && n--)
	{
		i = 0;
		for (i = 0; i < j; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		j++;
	}
}
