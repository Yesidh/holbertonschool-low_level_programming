#include "holberton.h"
/**
 * _puts_recursion - print a string with recursion
 *@s: string to be print
 *
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
		_putchar ('\n');
}
