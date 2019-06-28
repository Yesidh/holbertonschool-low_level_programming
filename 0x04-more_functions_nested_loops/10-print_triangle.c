#include "holberton.h"
/**
 * print_triangle - print a triangle with the character
 * @size: define the size of square
 * Return: diagonal line
 *
 */
void print_triangle(int size)
{
	int a = 0, b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				if (b < (size - (a + 1)))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
				b++;
			}
			b = 0;
			a++;
			_putchar('\n');
		}
	}
}
