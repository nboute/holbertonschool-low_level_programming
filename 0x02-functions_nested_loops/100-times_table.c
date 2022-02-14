#include "main.h"

/**
 * put_nbr - prints given number
 *
 * @n: number to print
 */

void	put_nbr(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		put_nbr(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		put_nbr(-n);
	}
	else if (n >= 10)
	{
		put_nbr(n / 10);
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n % 10 + '0');
}

/**
 * print_times_table - prints times table of the given parameter, up to 15
 *
 * @n: value of the times table to print
 */

void	print_times_table(int n)
{
	int	i, j, nb;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			nb = i * j;
			if (j)
			{
				_putchar(',');
				_putchar(' ');
				if (nb < 100)
					_putchar(' ');
				if (nb < 10)
					_putchar(' ');
			}
			put_nbr(nb);
		}
		_putchar('\n');
	}
}
