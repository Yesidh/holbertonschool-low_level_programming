#include "holberton.h"
/**
 * _strlen - how many characters hava an string
 *@s: string
 *
 * Return: nothing
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
