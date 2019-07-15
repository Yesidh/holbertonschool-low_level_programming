#include <stdio.h>
/**
 * main - argc size
 *@argc: size of argv array
 *@argv: array with size argc
 * Return: the first argument in the program
 */
int main(int argc, char *argv[])
{
	if (*argv != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
