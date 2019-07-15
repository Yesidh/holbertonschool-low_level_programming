#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments of argv
 *@argc: size of argv array
 *@argv: array with size argc
 * Return: printf all arguments in the string argv one by one
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (1);
}
