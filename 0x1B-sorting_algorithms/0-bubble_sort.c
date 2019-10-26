#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers in ascending order
 * using Bubble sort algorithm
 * @array: array of integers for order
 * @size: size of elements into the array
 * Return: nothin
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp = 0;

	for (i = 0; array && size && i < (size - 1); i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
