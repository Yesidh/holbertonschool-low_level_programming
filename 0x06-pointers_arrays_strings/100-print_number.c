#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer num
 *
 *
 * Return: nothing
 */
void print_number(int n)
{
	int n2 = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	while (n >= 0)
	{
		n2 = (n2 % 10) * 10 + (n / 10);
		_putchar((n % 10) + '0');
		n = n / 10;
		if (n == 0)
			n = -1;
	}
}
