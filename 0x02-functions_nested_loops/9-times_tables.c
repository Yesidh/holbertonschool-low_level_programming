#include "holberton.h"
/**
 * times_table -print the tables starting with 0 ending in 9
 *
 *
 * Return: nothing
 */
void times_table(void)
{
	int i = 0, j = 0, mul;

	while (i <= 9)
	{
		while (j <= 9)
		{
			mul = i * j;
			if (mul > 9)
			{
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				if (j >= 1)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else
					_putchar(mul + '0');
			}
			if (j < 9)
			_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
