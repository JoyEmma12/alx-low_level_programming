#include "main.h"
#include <stdlib.h>

/**
  * free_grid - fress a 2 dimensional grid
  * @grid: the dimensional grid
  * @height: the height of the grid
  *
  * Return: 2 dimensional grid
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
