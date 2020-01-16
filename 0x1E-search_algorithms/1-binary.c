#include "search_algos.h"
/**
 * print_array - function that print the searching array
 * @array: array to print
 * @L: the first position to print
 * @R: the last position to print
 * Return: nothing
 */

void print_array(int *array, int L, int R)
{
	int i;

	for (i = L; i <= R; i++)
	{
		if (i == R)
			printf("%d\n", array[i]);
		else if (i < R)
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - function that searches for a value in an array of integers
 *                 using the binary search
 * @array: pointer to the firs element of the array to search in
 * @size: numbers of elements in the array
 * @value: the value to search for
 * Return: -1 if the array is NULL of if the value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = 0, m = 0;

	R = size - 1;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		print_array(array, L, R);
		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
