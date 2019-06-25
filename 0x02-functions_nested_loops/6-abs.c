#include "holberton.h"
/**
 * _abs - check absolute value of an integer
 *@n: is the integer num to evaluate
 *
 * Return: number without sign
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
