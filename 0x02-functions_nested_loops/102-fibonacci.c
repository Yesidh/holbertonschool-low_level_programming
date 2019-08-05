#include <stdio.h>
/**
 * main -program that add all multiples for 3 and 5 under 1024
 * Return: nothing
 */
int main(void)
{
	int i;
	long int  sum, b = 1, a = 0;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (i < 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
