#include "holberton.h"
/**
 * puts_half - printf one char out of 2
 *@str: string
 *
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	j = i % 2;
	i /= 2;
	if (j == 0)
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (j != 0)
	{
		i = ((i + 1) / 2);
		while (str[i])
		{
			_putchar(str[i]);
				i++;
		}
	}
	_putchar('\n');
}
