#include "holberton.h"
/**
 * _strchr - locates a character in a string
 *@s: string to search
 *@c:character to be find
 *
 *
 * Return: string after the first similarity
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[j])
		j++;
	j++;
	while (i <= j)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
