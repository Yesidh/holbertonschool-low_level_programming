#include "holberton.h"
/**
 * _pow_recursion - value x raised to the power y
 *@x: base
 *@y: exponent
 *
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
