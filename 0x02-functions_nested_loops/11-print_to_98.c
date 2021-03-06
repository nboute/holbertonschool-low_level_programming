#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start printing with
 */

void	print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n += n > 98 ? -1 : 1;
	}
	printf("98\n");
}
