#include "main.h"

/**
 * _puts_recursion - Prints string recursively
 * @s: string to print
 */
void	_puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
