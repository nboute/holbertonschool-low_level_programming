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

	nb = 1;
	oldnb = 0;
	if (!n)
		return (0);
	while (n > 1)
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
