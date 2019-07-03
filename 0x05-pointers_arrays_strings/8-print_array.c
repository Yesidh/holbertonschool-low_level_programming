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
	int b = 0, c;

	c = n - 1;
	while  (b < n)
	{
		if (b < c)
			printf("%d, ", a[b]);
		else
			printf("%d\n", a[b]);
		b++;
	}
}
