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
	if (!n)
		return (0);
	if (n == 1 || n == 2)
		return (1);
	return (fibonacci(n - 1) + fibonacci(n - 2));
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
