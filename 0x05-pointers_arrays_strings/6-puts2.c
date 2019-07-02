#include "holberton.h"
/**
 * puts2 - printf one char out of 2
 *@str: string
 *
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int i = 0, b;

	while (str[i])
		i++;
	b = i;
	i = 0;
	while ((str[i]) && (i <= b))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
