#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - prints a name
 * @array: array of numbers
 * @size: size of the array
 * @action: pointer to a function that no return and receive an int like argu
 * ment
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
