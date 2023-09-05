#include "main.h"
/**
 * free_grid - free the grid
 *
 * @grid: grid the memories
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	for (; j < height; j++)
		free(grid[j]);
	free(grid);
}
