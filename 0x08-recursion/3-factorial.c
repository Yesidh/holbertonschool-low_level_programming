#include "holberton.h"
/**
 * factorial - factorial for an integer
 *@n: integer for factorial
 *
 *
 * Return: factorial for n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
