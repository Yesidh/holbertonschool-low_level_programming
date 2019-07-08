#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set o bytes
 *@s: string to locate first occurrence
 *@accept: string to search first occurrence
 *
 *
 * Return: pointer to the matches byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (accept[j] == s[i])
				return (s + i);
			j++;
		}
		j = 0;
		i++;
	}
	return ('\0');
}
