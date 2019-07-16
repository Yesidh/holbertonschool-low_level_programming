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
	int num, i = 0, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

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
	while (coins[i] != '\0')
	{
		if (num >= coins[i])
		{
			change += num / coins[i];
			num = num % coins[i];
		}
		i++;
	}
	printf("%d\n", change);
	return (0);
}
