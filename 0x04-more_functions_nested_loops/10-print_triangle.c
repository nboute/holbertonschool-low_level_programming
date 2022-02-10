#include "main.h"

/**
 * print_triangle - prints a triangle on terminal
 *
 * @size: size of triangle
 */

void	print_triangle(int size)
{
	int	i, j;

	if (!size)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - (i + 1); j++)
			_putchar(' ');
		for (j = size - (i + 1); j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
