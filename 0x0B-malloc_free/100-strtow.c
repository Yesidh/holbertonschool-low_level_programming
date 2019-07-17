#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - function that splits a string into words
 *@str: string to split
 *
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i;
	char *s1;
	char s;

	if (*str)
		return (NULL);

	for (i = 0; *str; i++)
	{
	}
	s = malloc(i * sizeof(int) + 1);
	if (s == NULL)
		return (NULL);
	s1 = "perrada";
	return (str);
}
