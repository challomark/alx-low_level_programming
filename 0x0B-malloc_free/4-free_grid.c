#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees memory from a second grid
 * @grid: the pointer to the grid
 * @height: the height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
