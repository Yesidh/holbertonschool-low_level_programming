#include "holberton.h"
/**
 * _strcat - concatenate two string
 * @dest:dest pointer
 * @src: source pointer
 *
 * Return: the  dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
