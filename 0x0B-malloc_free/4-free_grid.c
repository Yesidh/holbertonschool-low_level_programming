#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional array previosly created
 *@grid: pointer to pointer to erase
 *@height: lenght for the pointer to pointer
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
}
