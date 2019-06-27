#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line with \
 *@n: n times to be print the \
 *
 * Return: diagonal line
 *
 */
void  print_diagonal(int n)
{
	int a = 0, b = 0;
	int  d = 0;

	if (n > 0)
	{
		while (a <  n)
		{
			if ( d < n)
			{
				while (b < d)
				{
					_putchar(' ');
					b++;
				}
				b = 0;
				d++;
				_putchar(92);
				_putchar('\n');
				a++;
			}
		}	
	}
	else
		_putchar('\n');
}
