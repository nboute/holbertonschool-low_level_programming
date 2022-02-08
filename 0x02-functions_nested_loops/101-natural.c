#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of all numbers divisible by 3 or 5 up to 1024
 *
 * Return: Always 0
 */

int	main(void)
{
	int	nb, sum;

	sum = 0;
	nb = 1;
	while (nb < 1024)
	{
		if (nb % 3 == 0 || nb % 5 == 0)
			sum += nb;
		nb++;
	}
	printf("%d\n", sum);
	return (0);
}
