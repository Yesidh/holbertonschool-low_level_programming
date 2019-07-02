#include "holberton.h"
/**
 * rev_string - printf a string in reverse and normal
 *@s: string
 *
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char q[10] = "";

	while (s[i])
		i++;
	while (s[i] >= 0)
	{
		q[j] = s[i];
		i--;
		j++;
	}
	s = q;
}
