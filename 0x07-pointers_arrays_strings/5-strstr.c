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
		char *cpneed = needle;

		while (*haystack && *needle && *haystack == *cpneed)
		{
			haystack++;
			cpneed++;
		}
		if (!*cpneed)
			return (cphays);
		haystack = cphays + 1;
	}
	return ('\0');
}
