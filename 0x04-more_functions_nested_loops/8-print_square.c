#include "holberton.h"
/**
 * print_square - print a square with the character #
 * @size: define the size of square
 *
 * Return: diagonal line
 *
 */
void  print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		while (i <=  size)
		{
			while (j  <= size)
			{
				_putchar(35);
				j++;
			}
			j = 0;
			i++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
