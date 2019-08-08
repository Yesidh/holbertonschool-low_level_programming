#include "holberton.h"
/**
 * print_binary - Function that prints the binary representation of a number
 * @n: numbert to be represented in binary
 * Return: anything
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n > 1)
		print_binary(n >> 1);
	i = n & 1;
	_putchar(i + '0');
}
