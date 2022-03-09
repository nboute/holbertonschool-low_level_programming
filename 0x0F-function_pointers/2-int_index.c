#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Size of @array
 * @cmp: function to search for correct integer
 * Return: Index of first match with @cmp
 */
int		int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
