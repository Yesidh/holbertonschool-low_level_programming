#include "holberton.h"
/**
 * swap_int - take a pointer and update the value to 98
 *@a: pointer to swap value
 *@b: pointer to swap value
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
