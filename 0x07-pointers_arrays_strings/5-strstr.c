#include "holberton.h"
/**
 * _strstr - locates a substring
 *@haystack: string to search a substring
 *@needle: substring to be find
 *
 *
 * Return: substring pointer position
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (needle[i])
	{
		while (haystack[j])
		{
			if (haystack[j] == needle[i])
				return (haystack + j);
			j++;
		}
		j = 0;
		i++;
	}
	return ('\0');
}
