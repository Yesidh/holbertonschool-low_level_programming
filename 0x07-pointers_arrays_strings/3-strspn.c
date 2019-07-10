#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: string where search
 *@accept: string to be find
 *
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int i = 0, j = 0;

	while (s[i] != ',')
	{
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				cont++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (cont);
}
