#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 *                 using the Linear search
 * @array: pointer to the firs element of the array to search in
 * @size: numbers of elements in the array
 * @value: the value to search for
 * Return: -1 if the array is NULL of if the value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
