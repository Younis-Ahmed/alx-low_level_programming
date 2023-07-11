#include "main.h"
/**
 * free_grid - free 2D array
 * @grid: grid to free
 * @height: height of array
 * Return: pointer to the 2D array of int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
