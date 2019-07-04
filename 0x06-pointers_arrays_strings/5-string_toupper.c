#include "holberton.h"
/**
 * string_toupper - reverses the content of an array
 * @s: string
 *
 *
 * Return: the  dest pointer
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 97) && (s[i] <= 122))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
