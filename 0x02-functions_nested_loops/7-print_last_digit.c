#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: number to print
 * Return: Value of last digit
 */

int	print_last_digit(int i)
{
	i = i < 0 ? -i : i;
	i = i % 10;
	_putchar(i + '0');
	return (i);
}
