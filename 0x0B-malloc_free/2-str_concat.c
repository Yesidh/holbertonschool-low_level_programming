#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings in a new string
 *@s1: string one
 *@s2: string two
 *
 * Return: NULL if string don't have characters or malloc can't reserv memory
 * return a pointer with the new string.
 */
char *str_concat(char *s1, char *s2)
{
	char *str3;
	int i, j;

	for (i = 0; s1 != NULL && s1[i]; i++)
	{
	}
	for (j = 0; s2 != NULL && s2[j]; j++)
	{
	}
	str3 = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (str3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str3[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		str3[i] = s2[j];
		i++;
	}
	return (str3);
}
