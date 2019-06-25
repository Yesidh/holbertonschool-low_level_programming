#include "holberton.h"
/**
 * jack_bauer -print all minutes of the day
 *
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, l = 0, horas = 0;

	while (i <= 2)
	{
		while ((j <= 9) && (horas < 24))
		{
			while (k <= 5)
			{
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
			horas++;
		}
		j = 0;
		i++;
	}
}
