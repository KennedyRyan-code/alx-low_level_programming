#include "main.h"

/**
 * free_grid - function that frees a 2D grid
 * @grid: the first argument
 * @height: the second argument
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
