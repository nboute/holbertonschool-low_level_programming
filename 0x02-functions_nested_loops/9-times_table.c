#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */
void	times_table(void)
{
	int	nb;
	int	i;
	int	j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			nb = i * j;
			if (j)
			{
				_putchar(',');
				if (nb < 10)
					_putchar(' ');
				_putchar(' ');
			}
			if (nb >= 10)
				_putchar(nb / 10 + '0');
			_putchar(nb % 10 + '0');
		}
		_putchar('\n');
	}
}
