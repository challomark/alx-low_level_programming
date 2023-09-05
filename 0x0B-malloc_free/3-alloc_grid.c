#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to the allocated 2D array of integers
 * initialized to 0, or NULL on failure or invalid input
 */

int **alloc_grid(int width, int height)
{
	int **grid; /* Declaring a pointer to a pointer ffor the grid */
	int i, j; /* Loop counters */

	/* Checking for invalid input: width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocating memory for the grid of pointers (rows) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row of the grid */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* If allocation fails, free prev allocated mem */
			/* and return NULL */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	/* Initialize all elements of the grid to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	/* Returning a pointer to the allocated and initialized grid */
	return (grid);
}
