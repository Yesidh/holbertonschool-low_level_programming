#include <stdio.h>
/**
 * main - print the all possible different combinations of two digits
 *
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if ((a + b) < 17)
				{
				putchar(44);
				putchar(32);
				}
			}
			b += 1;
		}
		a += 1;
		b = 0;
	}
	putchar ('\n');
	return (0);
}
