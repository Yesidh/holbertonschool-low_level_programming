#include "holberton.h"
/**
 * print_rev - printf a string
 *@s: string
 *
 * Return: nothing
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
