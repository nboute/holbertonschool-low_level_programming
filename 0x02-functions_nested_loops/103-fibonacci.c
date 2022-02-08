#include "main.h"
#include <stdio.h>

/**
 * fibonacci - returns the nth number of the fibonacci suite
 *
 * @n: index of the fibonacci number to return
 * Return: Value the fibonacci numbers at index n
 */

unsigned long		fibonacci(unsigned long n)
{
	unsigned long	nb, oldnb, tmp;

	nb = 3;
	oldnb = 2;
	if (!n)
		return (1);
	if (n == 1)
		return (2);
	while (n > 2)
	{
		tmp = nb + oldnb;
		oldnb = nb;
		nb = tmp;
		n--;
	}
	return (nb);
}

/**
 * main - prints the sum of even fibonacci numbers up to 4m
 *
 * Return: Always 0
 */

int		main(void)
{
	int	i;
	unsigned long	nb, sum;

	sum = 0;
	nb = 0;
	i = 0;
	while ((nb = fibonacci(i)) < 4000000)
	{
		if (nb % 2 == 0)
			sum += nb;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
