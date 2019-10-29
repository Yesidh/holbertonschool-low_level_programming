#include "sort.h"

/**
 * selection_sort - Function that sorts an array using the Selection Sort algor
 * @array: array of integers for sort
 * @size: size of the array
 * Return: anything
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp = 0, min = 0;
	int flag = 0;

	for (i = 0; array && size && i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			flag = 0;
			print_array(array, size);
		}
	}
}
