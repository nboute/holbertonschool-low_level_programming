#include "main.h"

/**
 * _puts - prints string, followed by a newline
 * @str: string to print
 */
void	_puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
