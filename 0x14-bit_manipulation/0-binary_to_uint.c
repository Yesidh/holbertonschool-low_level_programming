#include "holberton.h"
/**
 * potencia - function that calcule the power of a number in base 2
 * @num: power
 * Return: power in base 2 of a num
 */
unsigned int potencia(unsigned int num)
{
	unsigned int i, sum = 2;

	for (i = 0; i <= num; i++)
	{
		if (num == 0)
			sum = 1;
		if (num == 1)
			sum = 2;
		if (i > 1)
			sum *= 2;
	}
	return (sum);
}
/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 * @b: string pointer
 * Return: the converted number or 0 if b is NULL
 * 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j, sum = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i];)
	{
		if (b[i] == 48 || b[i] == 49)
			++i;
		else
			return (0);
	}
	i--;
	for (j = 0; i >= 0; j++)
	{
		if (b[i] == 49)
			sum += potencia(j);
		i--;
	}
	return (sum);
}
