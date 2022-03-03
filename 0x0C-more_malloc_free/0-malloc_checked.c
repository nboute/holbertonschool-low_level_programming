#include <stdlib.h>

/**
 * malloc_checked - Mallocs given sizes, exits with code 98 if fail
 * @b: Size of allocation
 * Return: Allocated array
 */
void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
