#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer wich contain a copy of string
 *@str: string to be copied
 *
 *
 * Return: NULL if string and memory are empy, a pointer with a copy of string
 */
char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
	}
	str2 = malloc(i * sizeof(char) + 1);
	if (str2 == NULL)
		return (NULL);
	for ( ; i >= 0; i--)
		str2[i] = str[i];
	return (str2);

}
