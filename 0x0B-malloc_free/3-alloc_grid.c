#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2
 *	dimensional array of integers
 *
 * @width: row of integers
 * @height: column of integers
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	size_t i, j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
