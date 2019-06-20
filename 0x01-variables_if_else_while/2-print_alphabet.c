#include <stdio.h>
/**
 * main - print the alphabic in lowercase
 *
 *
 *
 *
 * Return: string with lower case
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc += 1;
	}
	putchar('\n');
	return (0);
}
