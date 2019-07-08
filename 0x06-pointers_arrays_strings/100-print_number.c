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
	int n2 = 0, cont = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	while (cont < 2)
	{
		while (n >= 10)
		{
			n2 = n2 * 10 + (n % 10);
			if (cont == 1)
				_putchar((n % 10) + '0');
			n = n / 10;
		}
		if (cont == 1)
			_putchar(n + '0');
		n2 = n2 * 10 + n;
		cont++;
		n = n2;
		n2 = 0;
	}
}
