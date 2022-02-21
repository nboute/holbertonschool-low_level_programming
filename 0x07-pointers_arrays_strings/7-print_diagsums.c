#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of both diagonals of a matrix
 * @a: matrix array
 * @size: size of a;
 */

void	print_diagsums(int *a, int size)
{
	int	i, nb;

	nb = 0;
	for (i = 0; i < size; i++)
		nb += a[i * size + i];
	printf("%d, ", nb);
	nb = 0;
	for (i = 0; i < size; i++)
		nb += a[i * size + size - i - 1];
	printf("%d\n", nb);
}
