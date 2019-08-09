#include "holberton.h"
/**
 * flip_bits - Function that returns the number or bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to need to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cont = 0;
	unsigned long int num;

	num = n ^ m;
	for (; num >= 1; )
	{
		if ((num & 1) == 1)
			cont++;
		num = num >> 1;
	}
	return (cont);
}
