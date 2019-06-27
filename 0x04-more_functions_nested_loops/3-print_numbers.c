#include "holberton.h"
/**
 * print_numbers - function that prints numbers from 0 to 9
 *
 *
 * Return: nothing
 *
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
