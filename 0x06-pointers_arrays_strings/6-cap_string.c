#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 *
 * Return: nothing
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char s2[] = ", \t\n.;?\")(}{";

	while (s[i])
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			if ((i == 0) || (s[i - 1] == 46) || (s[i - 1] == 9))
			{
				s[i] -= 32;
			}
			if ((s[i - 1] == 32) || (s[i - 1] == '\n'))
			{
				s[i] -= 32;
			}
			while (s2[j])
			{
				if (s[i] == s2[j])
				{
					s[i + 1] -= 32;
				}
				j++;
			}
		}
		i++;
	}
	return (s);
}
