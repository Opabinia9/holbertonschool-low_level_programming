#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2D array
 * @grid: 2D array to free
 * @height: the hight of the 2D array to free
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
