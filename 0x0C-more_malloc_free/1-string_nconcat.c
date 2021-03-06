#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *@s1: string one
 *@s2: string two
 *@n: bytes to copy of string s2
 * Return: pointer where s1 and s2 are concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
	{
		s3 = malloc(sizeof(char) * (i + j + 1));
		if (s3 == NULL)
			return (NULL);
		for (i = 0 ; s1[i] ; i++)
			s3[i] = s1[i];
		for (j = 0 ; s2[j] ; j++, i++)
			s3[i] = s2[j];
	}
	else if (n < j)
	{
		s3 = malloc(sizeof(char) * (i + n + 1));
		if (s3 == NULL)
			return (NULL);
		for (i = 0 ; s1[i] ; i++)
			s3[i] = s1[i];
		for (j = 0 ; n > 0; n--, j++, i++)
			s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
