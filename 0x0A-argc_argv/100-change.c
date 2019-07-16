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
	int num, change = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	num = atoi(argv[1]);
	if (num >= 25)
	{
		change += num / 25;
		num = num % 25;
	}
	if (num >= 10)
	{
		change += num / 10;
		num = num % 10;
	}
	if (num >= 5)
	{
		change += num / 5;
		num = num % 5;
	}
	if (num >= 2)
	{
		change += num / 2;
		num = num % 2;
	}
	if (num >= 1)
		change += num;
	printf("%d\n", change);
	return (0);
}
