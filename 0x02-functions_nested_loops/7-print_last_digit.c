#include "holberton.h"
/**
 * print_last_digit -print last digit for an integer
 *@n: is the integer num to evaluate
 *
 * Return: last digit
 */
int print_last_digit(int n)
{

	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n * (-1) % 10;
		_putchar(n + '0');
		return (n);
	}
}
