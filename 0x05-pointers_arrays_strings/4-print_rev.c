#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to print
 */
void	print_rev(char *s)
{
	int	i;

	for (i = 0; s[i]; i++)
		;
	while (--i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}
