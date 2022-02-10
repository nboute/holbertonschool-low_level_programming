#include "main.h"

/**
 * print_line - prints the character '_' n times
 *
 * @n: number of times to print
 */

void	print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
