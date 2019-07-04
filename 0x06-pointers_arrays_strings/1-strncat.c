#include "holberton.h"
/**
 * _strncat - concatenate two string
 * @dest:dest pointer
 * @src: source pointer
 * @n: array size in bytes
 * Return: the  dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
