#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array
 * @grid: 2 dimensional array
 * @height: the height of the array
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	if (grid == NULL)
		free(grid);

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
