#include <stdlib.h>

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
 */

void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
	free(grid[i]);
free(grid);
}
