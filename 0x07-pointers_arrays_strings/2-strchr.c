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
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == '\0')
		return ('\0');
	return ('\0');
}
