# include "main.h"
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
 * _atoi - converts string into an integer
 * @s: string to convert
 * Return: integer format of string
 */

int	_atoi(char *s)
{
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9' && ((nb >= 0 && nb < 214748365)
	|| (nb < 0 && nb > -214748365)))
	{
		if (sign == 1)
			nb = nb * 10 + (*s - '0');
		else if (sign == -1)
			nb = nb * 10 - (*s - '0');
		s++;
	}
	return (nb);
}

int		main(int ac, char **av)
{
	int	i, j, nb;

	nb = 0;
	if (ac < 2)
	{
		print_number(0);
		_putchar('\n');
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				_puts("Error");
				return (1);
			}
		}
		nb += _atoi(av[i]);
	}
	print_number(nb);
	_putchar('\n');
	return (0);
}
