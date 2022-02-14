#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array of integers
 * @a: array of integers
 * @n: size of array a
 */
void	print_array(int *a, int n)
{
	int	i;

	if (!a)
		return;
	for (i = 0; i < n; i++)
	{
		if (i)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
