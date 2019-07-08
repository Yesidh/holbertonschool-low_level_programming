#include "holberton.h"
/**
 * _memcpy - copies memory area
 *@dest: dest area memory
 *@src: source area memory
 *@n: bytes of memory
 *
 * Return: array fill with character b
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
