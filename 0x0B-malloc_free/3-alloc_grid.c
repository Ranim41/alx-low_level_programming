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
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid[i]);
			return (NULL);
		}
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}
	return (grid);
}
