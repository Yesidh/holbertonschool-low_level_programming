#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 *
 * @argc: size of array
 * @argv: array with size arguments
 *
 * Return: the operation between two integers
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
