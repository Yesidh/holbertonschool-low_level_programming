#include "holberton.h"
#include <stdio.h>
/**
 * print_array - printf n elements of an array
 *@a: an array
 *@n: array elements
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int b = 0;

	while  (b < n)
	{
		if (b < (n - 1))
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
		b++;
	}
	printf("\n");
}
