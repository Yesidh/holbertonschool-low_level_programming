#include <stdio.h>
/**
 * main -program that add all multiples for 3 and 5 under 1024
 * Return: nothing
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		if (i % 5 == 0)
			sum += i;
		if (i % 15 == 0)
			sum -= i;
	}
	printf("%d\n", sum);
	return (0);
}
