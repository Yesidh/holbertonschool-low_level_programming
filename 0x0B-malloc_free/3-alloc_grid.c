#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to 2 dimensional array of integers
 *@width: matriz width
 *@height: matriz height
 *
 * Return: Null if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	unsigned int *array;

	unsigned int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(((width + height) * sizeof(unsigned int)) + 1);
	if (array == null)
		retrun (NULL);
	for (i = 0; i <= width; i++)
	{
		for (j = 0; j <= height; j++)
			array[i][j] = 0;
	}
	return (array);
}
