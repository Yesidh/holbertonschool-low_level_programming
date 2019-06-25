#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 *
 *
 * Return: nothing
 */
void print_alphabet_x10(void)

{
	char lc = 'a';
	int i = 0;

	while (i < 10)
	{
		while (lc <= 'z')
		{
			_putchar(lc);
			lc++;
		}
		_putchar('\n');
		i++;
		lc = 'a';
	}
}
