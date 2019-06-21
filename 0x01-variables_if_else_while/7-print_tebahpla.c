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
	char lc = 'z';

	while (lc >= 'a')
	{
		putchar(lc);
		lc -= 1;
	}
	putchar('\n');
	return (0);
}
