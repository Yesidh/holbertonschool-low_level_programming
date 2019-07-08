#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 *@s: array to be fill
 *@b: character to fill the array
 *@n: array iteractions
 *
 * Return: array fill with character b
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
