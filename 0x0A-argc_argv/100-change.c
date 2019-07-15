#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount mon
 *@argc: size of argv array
 *@argv: array with size argc
 * Return: 1 if argc is different of 1 and 0 argument is negative
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 1 && argc > 0)
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("argv %s\n", argv[i]);
	return (0);
}
