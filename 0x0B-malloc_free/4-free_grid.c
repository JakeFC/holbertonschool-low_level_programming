#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid that was made
 * @grid: 2d array input
 * @height: height of inputted grid
 */
void free_grid(int **grid, int height)
{
	free(grid);
	(void)height;
}
