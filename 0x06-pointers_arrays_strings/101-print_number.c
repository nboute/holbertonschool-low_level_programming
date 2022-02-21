#include "main.h"

/**
 * print_number - prints number to stdout
 *
 * @n: number to print
 */

void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			print_number(147483648);
		}
		else
			print_number(-n);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n % 10 + '0');
}
