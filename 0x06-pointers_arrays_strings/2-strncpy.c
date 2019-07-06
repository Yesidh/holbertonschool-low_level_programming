#include "holberton.h"
/**
 * _strncpy - concatenate two string
 * @dest:dest pointer
 * @src: source pointer
 * @n: array size in bytes
 * Return: the  dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
