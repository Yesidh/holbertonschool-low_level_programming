#include "holberton.h"
/**
 * _sqrt_aux - calculate the sqrt
 *@n: number for sqrt
 *@i: count for multiplicate
 *
 * Return: value of sqrt
 */
int _sqrt_aux(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i > n / 2)
		return (-1);
	return (_sqrt_aux(n, i + 1));
}




/**
 * _sqrt_recursion - calculate the sqrt
 *@n: integer for calculation sqrt
 *
 *
 * Return: sqrt for num
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt_aux(n, i));
}
