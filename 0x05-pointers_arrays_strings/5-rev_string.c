#include "holberton.h"
/**
 * rev_string - printf a string in reverse
 *@s: string
 *
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char q[1000] = "";

	while (s[i])
		i++;
	while (i >= 0)
	{
		q[j] = s[i];
		i--;
		j++;
	}
	j = 1;
	i = 0;
	while (q[j])
	{
		s[i] = q[j];
		j++;
		i++;
	}
}
