# include "main.h"
# include <stdlib.h>
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

/**
 * main - Prints minimum number of coins to give for change
 * @ac: number of arguments
 * @av: array of arguments strings
 * Return: Always 0
 */

int		main(int ac, char **av)
{
	int	nb, count;

	count = 0;
	if (ac != 2)
	{
		_puts("Error");
		return (1);
	}
	nb = atoi(av[1]);
	if (nb < 0)
	{
		_puts("0");
		return (0);
	}
	count += nb / 25;
	nb %= 25;
	count += nb / 10;
	nb %= 10;
	count += nb / 5;
	nb %= 5;
	count += nb / 2;
	count += nb % 2;
	print_number(count);
	_putchar('\n');
	return (0);
}
