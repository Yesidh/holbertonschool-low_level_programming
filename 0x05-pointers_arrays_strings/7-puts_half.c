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
 	if ((i % 2) == 0)
	{
		j = i / 2;
	}
	else
	{
		j = ((i - 1) / 2);
	}
		while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
