#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function to deallocate a 2D grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: free memory of grid
 * Return: void
 *
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
