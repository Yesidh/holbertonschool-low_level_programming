#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two main diagonals of a matrix
 *@a: pointer
 *@size: pointer lenght
 *
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum2 = 0, i2 = size - 1;

	while (i <= ((size * size) - 1))
	{
		sum = sum + a[i];
		i = i + (size + 1);
		sum2 = sum2 + a[i2];
		i2 = (size - 1) + i2;
	}
	printf("%d, %d\n", sum, sum2);

}
