#include "holberton.h"
/**
 * print_line - prints a line with character _ n times when n is gratter than 0
 *@n: n times to be print
 *
 * Return: line n
 *
 */
void  print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
