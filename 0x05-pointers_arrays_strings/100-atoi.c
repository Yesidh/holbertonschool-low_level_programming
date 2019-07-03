#include "holberton.h"
#include <math.h>
/**
 * _atoi - convert a string to an integer
 *@s: string
 *
 *
 * Return: nothing
 */

int _atoi(char *s)
{
	int i = 0, m = 0, j = 0;
	float sum = 0, num = 0;

	while ((s[i] == '-') && ((s[i + 1] >= 0) || (s[i] <= 9)))
	{
		m++;
		if ((s[i] >= 0) || (s[i] <= 9))
		{
			if (num == 0)
				j = i;
			num++;
		}
		i++;
	}
	while (((s[j] >= 0) || (s[j] <= 9)) && num > 0)
	{
		sum = sum + s[j] * pow(10, (num - 1));
		j++;
		num--;
	}
return (sum);
}
