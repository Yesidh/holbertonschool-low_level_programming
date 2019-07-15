#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the result that adds positive numbers
 *@argc: size of argv array
 *@argv: array with size argc
 * Return: 0 if dont have numbers, 1 if the numbers contains symbols
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
