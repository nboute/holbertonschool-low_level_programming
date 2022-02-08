#include "main.h"

/**
 * print_n_digit - prints the n digit of a number
 *
 * @nb: number from which to print the digit
 * @index: index of the digit to print
 */

void	print_n_digit(int nb, int index)
{
	if (index > 1)
		print_n_digit(nb / 10, index - 1);
	else
		_putchar(nb % 10 + '0');
}

/**
 * put_nbr - prints given number
 *
 * @n: number to print
 */

void	put_nbr(int n)
{
	int	nb_digits, tmp;

	tmp = n;
	nb_digits = 1;
	while (tmp >= 10)
	{
		tmp /= 10;
		nb_digits++;
	}
	while (nb_digits)
		print_n_digit(n, nb_digits--);
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
