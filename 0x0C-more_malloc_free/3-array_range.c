#include <stdlib.h>

/**
 * array_range - Allocates an array and fills it with values in a range
 * @min: Start of the range
 * @max: End of the range
 * Return: Newly created array or NULL if error
 */
int		*array_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i + min < max)
	{
		ptr[i] = min + i;
		i++;
	}
	ptr[i] = max;
	return (ptr);
}
