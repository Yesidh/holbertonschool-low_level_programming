#include "holberton.h"
/**
 * _print_rev_recursion - print a string in reverse
 *@s: string to prints in reverse
 *
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
			_putchar(*s);
	}
	else if (*s == '\0')
		_putchar('\n');
}
