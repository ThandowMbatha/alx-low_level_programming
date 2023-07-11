#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a nested loop to create a grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ree;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ree = malloc(sizeof(int *) * height);

	if (ree == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ree[x] = malloc(sizeof(int) * width);

		if (ree[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ree[x]);

			free(ree);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ree[x][y] = 0;
	}

	return (ree);
}
