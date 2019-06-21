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
	char lc = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a += 1;
	}
	while (lc <= 'f')
	{
		putchar(lc);
		lc += 1;
	}
	putchar('\n');
	return (0);
}
