#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: number to print
 * Return: Value of last digit
 */

int	print_last_digit(int i)
{
	long	l;

	l = i % 10;
	l = l < 0 ? -l : l;
	_putchar(l + '0');
	return ((int)l);
}
