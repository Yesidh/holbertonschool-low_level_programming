#include "holberton.h"
/**
 * more_numbers - prints 14 times the numbers from 0 to 14
 *
 *
 * Return: nothing
 *
 */
void more_numbers(void)
{
	int n = 0, m = 0;

	while (n <= 10)
	{
		while (m <= 14)
		{
			if (m > 9)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			m++;
		}
		n++;
		m = 0;
		_putchar('\n');
	}
}
