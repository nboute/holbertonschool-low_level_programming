#include "function_pointers.h"

/**
 * array_iterator - Executes given function on all members of an array
 * @array: Array that contains elements to execute function on
 * @size: Size of @array
 * @action: Function to execute on @array's elements
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	while (size--)
		action(*array++);
}
