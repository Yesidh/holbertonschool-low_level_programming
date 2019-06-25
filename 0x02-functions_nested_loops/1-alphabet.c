#include "holberton.h"
/**
 * print_alphabet  - print alphabet in lowercase
 *
 *
 * Return: Zero
 */
void print_alphabet(void)
{
	char lc  = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc += 1;
	}
	_putchar('\n');
}
