#include <stdio.h>
/**
 * main - print first argument
 *@argc: size of argv array
 *@argv: array with size argc
 * Return: the first argument in the program
 */
int main(int argc, char *argv[])
{
	if (argc >= 0 )
		printf("%s\n", argv[0]);
	return (0);
}
