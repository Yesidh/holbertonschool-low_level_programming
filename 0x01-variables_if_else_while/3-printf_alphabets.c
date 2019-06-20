#include <stdio.h>
/**
 * main - print the alphabic in lowercase and uppercase
 *
 *
 *
 *
 * Return: 0
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc += 1;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc += 1;
	}
	putchar('\n');
	return (0);
}
