#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: The 2D grid to be freed
 * @height: The height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i; /* Loop counter */

	/* Checking if grid is NULL or height is less than or */
	/* equal to 0 */
	if (grid == NULL || height <= 0)
		return; /* Nothing to free, so return early */

	/* Free each row of the grid individually */
	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* Free the memory allocated for each row */
	}

	/* Free the grid itself (the array of row pointers) */
	free(grid);
}
