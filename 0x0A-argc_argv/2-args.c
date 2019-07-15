#include <stdio.h>
/**
 * main - prints all arguments of argv
 *@argc: size of argv array
 *@argv: array with size argc
 * Return: printf all arguments in the string argv one by one
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
