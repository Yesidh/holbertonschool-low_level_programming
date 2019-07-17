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
	int **array;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (k = 0; k <= i; k++)
				free(array[k]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
