#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - printf n elements of an array
 *@dest: an array
 *@src: array elements
 *
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0, c = 0, d;

	while (src[c])
		c++;
	d = c;
	c = 0;
	while (d >= 0)
	{
		dest[b] = src[c];
		d--;
		c++;
		b++;
	}
	return (dest);
}
