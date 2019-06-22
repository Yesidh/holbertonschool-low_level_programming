#include <stdio.h>
/**
 * main - print the all possible different combinations of three digits
 *
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				if ((a < b) && (b < c))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if ((a + b + c) < 24)
					{
						putchar(44);
						putchar(32);
					}
				}
				c += 1;
			}
			b += 1;
			c = 2;
		}
		a += 1;
		b = 1;
	}
	putchar ('\n');
	return (0);
}
