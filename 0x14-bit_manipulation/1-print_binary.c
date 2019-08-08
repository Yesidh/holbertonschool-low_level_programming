#include "holberton.h"
/**
 * print_binary - Function that prints the binary representation of a number
 * @n: numbert to be represented in binary
 * Return: anything
 */
void print_binary(unsigned long int n)
{
        int i, j;

	for (i = 31; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
			printf("1");
		else
			printf("0");
	}
}
