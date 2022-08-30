#include <stdio.h>
#include <math.h>

/**
 * jump_search - Search for a value in a sorted array using jump Search
 * @array: Array
 * @size: Size of @array
 * @value: Value to search in @array
 * Return: Index of match, or -1 if none were found
 */
int		jump_search(int *array, size_t size, int value)
{
	size_t	right, left = 0;
	size_t	jump;

	jump = sqrt(size);
	if (!size || !array)
		return (-1);
	right = jump;
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	while (left < size - 1 && array[right] < value)
	{
		left = right;
		right = right + jump;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	while (left < size && array[left] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left++;
		if (left == right + 1 || left == size)
			return (-1);
	}
	if (left < size && array[left] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		return (left);
	}
	return (-1);
}
