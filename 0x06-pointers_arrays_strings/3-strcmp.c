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
	int i = 0, j = 0, k = 0;

	while ((s1[i] == s2[j]) && s1[i])
	{
		i++;
		j++;
	}
	if (s1[i] == '\0')
		return (k);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i > j)
		return (1);
	if (j > i)
		return (-1);

	return (0);
}
