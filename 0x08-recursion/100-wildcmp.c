#include "holberton.h"
/**
 * wildcmp - compare two strings
 *@s1: first string
 *@s2: second string
 *
 * Return: 1 if the strings are identical 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (*s1 == *s2 && *s1 && *s2)
		return (1);
	return (wildcmp(++s1, ++s2));
}
