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
	int i = 0;

	while (str[i])
		i++;
	i /= 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
