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
	char lc = 'a';

	while (lc <= 'z')
	{
		if ((lc != 'q') && (lc != 'e'))
		{
			putchar(lc);
		}
		lc += 1;
	}
	putchar('\n');
	return (0);
}
