#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 *
 *
 * Return: string s
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char *ar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ar2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		while (ar1[j])
		{
			if (s[i] == ar1[j])
			{
				s[i] = ar2[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
