#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: dir array 1
 * @s2: dir array 2
 *
 * Return: the  dest pointer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, r = 0;

	while (s1[i] && r == 0)
	{
		r = s1[i] - s2[j];
		i++;
		j++;
	}
	return (r);
}
