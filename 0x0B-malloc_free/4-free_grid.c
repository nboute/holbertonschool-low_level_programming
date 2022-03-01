#include <stdlib.h>

/**
 * free_grid - Frees a two-dimensional array
 * @grid: Array to free
 * @height: height of array
 */
void	free_grid(int **grid, int height)
{
	int	i;

	for (i = 0; i < height; i++)
	{
		if (grid[i])
			free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
}
