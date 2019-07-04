#include "holberton.h"
/**
 * reverse_array - reverses the content of an array
 * @a:dest pointer
 * @n: bytes number
 *
 * Return: the  dest pointer
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0, temp = 0;

	while (j < n / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i--;
		j++;
	}
}
