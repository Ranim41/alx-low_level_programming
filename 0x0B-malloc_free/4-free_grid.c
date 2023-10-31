#include "main.h"

/**
 * free_grid  -  function that frees a 2 dimensional grid
 *
 * @grid: 2 dimensional array
 * @height: height of array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
