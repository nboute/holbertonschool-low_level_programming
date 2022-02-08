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
 * main - prints the first 50 of the Fibonacci numbers
 *
 * Return: Always 0
 */

int		main(void)
{
	int	i;

	for (i = 0; i < 50; i++)
	{
		if (i)
			printf(", ");
		printf("%ld", fibonacci(i));
	}
	printf("\n");
	return (0);
}
