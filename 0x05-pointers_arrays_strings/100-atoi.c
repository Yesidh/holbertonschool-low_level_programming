#include "holberton.h"
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
	int sum = 0, num = 0, pot = 1;

	while (s[i] == '-')
	{
		m++;
		if ((s[i] >= 0) && (s[i] <= 9))
		{
			if (num == 0)
				j = i;
			num++;
		}
		i++;
	}
	_putchar(i);
	_putchar(num);
	while (((s[j] >= 0) && (s[j] <= 9)) && num > 0)
	{
		while ((num - 1) > 0)
		{
			pot = pot * 10;
			num--;
		}
		sum = sum + ((s[j] - '0') * pot);
		j++;
		num--;
	}
	return(sum);
}
