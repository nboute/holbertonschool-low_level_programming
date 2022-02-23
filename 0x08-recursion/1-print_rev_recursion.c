#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse recursively
 * @s: String to print
 */
void	_print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
