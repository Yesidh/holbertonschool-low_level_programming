#include "holberton.h"
/**
 * _puts - printf a string
 *@str: string
 *
 * Return: nothing
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
