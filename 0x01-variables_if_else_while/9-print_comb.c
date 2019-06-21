#include <stdio.h>
/**
 * main - print the alphabic in lowercase except q and e
 *
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(44);
			putchar(32);
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
