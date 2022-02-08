#include "main.h"
#include <stdio.h>

/**
 * fibonacci - prints the nth number of the fibonacci suite
 *
 * @n: index of the fibonacci number to return
 * Return: Value the fibonacci numbers at index n
 */

unsigned long		fibonacci(unsigned long n)
{
	unsigned long	nb, oldnb, nb_bil, oldnb_bil, tmp, tmp_bil;

	nb = 3;
	oldnb = 2;
	nb_bil = 0;
	oldnb_bil = 0;
	if (!n)
		nb = 1;
	if (n == 1)
		nb = 2;
	while (n > 2)
	{
		tmp = nb + oldnb;
		tmp_bil = nb_bil + oldnb_bil;
		oldnb = nb;
		oldnb_bil = nb_bil;
		nb = tmp;
		nb_bil = tmp_bil;
		if (nb >= BILLION)
			nb_bil++;
		nb %= BILLION;
		oldnb %= BILLION;
		n--;
	}
	if (nb_bil)
		printf("%ld", nb_bil);
	printf("%ld", nb);
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

	i = 0;
	while (i < 98)
	{
		if (i)
			printf(", ");
		fibonacci(i++);
	}
	printf("\n");
	return (0);
}
