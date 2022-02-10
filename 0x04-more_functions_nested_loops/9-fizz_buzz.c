#include "main.h"
#include <stdio.h>

/**
 * main - prints number from 1 to 100 with exceptions
 * printfs "Fizz" if number is divisible by 3, "Buzz" if divisible by 5
 * "FizzBuzz" if both
 * Return: Always 0
 */

int	main(void)
{
	int	n;

	for (n = 1; n <= 100; n++)
	{
		if (n != 1)
			printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 && n % 5)
			printf("%d", n);
	}
	printf("\n");
	return (0);
}
