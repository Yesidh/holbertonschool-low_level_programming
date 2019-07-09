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

	while (*haystack)
	{
		char *cphays = haystack;

		while (*haystack && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (cphays);
		haystack = cphays + 1;
	}
	return ('\0');
}
