#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of numbers
 * @size: size of the array
 * @cmp: pointer to a function to be used to compare values
 * Return: the index of the first element find in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		if (i == size)
			return (-1);
	}
	return (-1);
}
