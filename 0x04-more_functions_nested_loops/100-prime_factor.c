#include <stdio.h>

/**
 * _isprime - Checks if a number is prime
 *
 * @n: number to check
 * Return: 1 if number is prime, 0 if not
 */

int		_isprime(unsigned long n)
{
	unsigned long	div;

	div = 2;
	while (div <= n / div && n % div)
		div++;
	if (n % div != 0)
		return (1);
	return (0);
}

/**
 * main - returns the biggest prime factorization of a number
 *
 * Return: Always 0
 */

int		main(void)
{
	unsigned long	div;
	unsigned long	maxdiv;

	div = 2;
	maxdiv = 1;
	while (div <= 612852475143 / maxdiv)
	{
		if (612852475143 % div == 0)
			if (_isprime(div) != 0)
				maxdiv = div;
		div++;
	}
	if (maxdiv != 1)
		printf("%ld\n", maxdiv);
	else
		printf("\n");
	return (0);
}
