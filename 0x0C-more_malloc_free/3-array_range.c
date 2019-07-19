#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - prints array from min to max
 * @min: the min values of an array.
 * @max: the max values of an array.
 *
 *
 * Return: Pointer to the new array from min to max
 */
int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; min++, i++)
		m[i] = min;
	return (m);
}
