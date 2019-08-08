#include "holberton.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: numbert to find a index bit
 * @index: the bit we need to return
 * Return: the value of the bit index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);
	for (i = 0; i < index; i++)
	{
		if (n > 1)
			n = n >> 1;
		else
			return (-1);
	}
	return (n & 1);
}
