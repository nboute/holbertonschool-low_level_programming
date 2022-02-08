#include "main.h"

/**
 * print_sign - Checks if argument is lower, greater, or equal to 0
 * @n: variable to compare
 * prints + if the value is greater than 0. - if lesser than. = if equal to.
 * Return: 1 if the number is positive. -1 if negative. 0 otherwise.
 */

int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('=');
	return (0);
}
