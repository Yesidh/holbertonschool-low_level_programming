#include "holberton.h"
/**
 * print_times_table -print the tables starting with 0 ending in 9
 * @n: times to print a table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0, j = 0, mul;

	if ((n >= 0) && (n <= 15))
	{
		while (i <= n)
		{
			while (j <= n)
			{
				mul = i * j;
				if (mul == 0 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				if (mul == 0 && j == 0)
					_putchar(mul + '0');
				if (mul > 9 && mul < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				if (mul > 0 && mul < 10 && i > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				if (mul >= 100)
				{
					_putchar(' ');
					_putchar((mul / 100) + '0');
					mul = mul % 100;
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				if (j < n)
					_putchar(',');
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
}
