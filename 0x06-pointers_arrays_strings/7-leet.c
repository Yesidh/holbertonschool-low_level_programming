#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 *
 *
 * Return: string s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char *arr1 = "aAeEoOtTlL";
	char *arr2 = "4433007711";

	while (s[i])
	{
		while (arr1[j])
		{
			if (s[i] == arr1[j])
				s[i] = arr2[j];
			j++;
		}
		i++;
		j = 0;
	}
	return (s);
}
