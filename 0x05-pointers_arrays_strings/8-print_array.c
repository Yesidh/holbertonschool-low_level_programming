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
	int b;

	b = n - 1;
	n = 0;

	while (a[n] && (n < b))
	{
		printf("%d, ", a[n]);
		n++;
	}
	printf("%d\n", a[n]);
}
