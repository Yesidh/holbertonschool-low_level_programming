#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - function to print basic operations like a calculator, add, div, sub
 * mod and mul
 * @argc: size of array
 * @argv: array with size arguments
 *
 * Return: the operation between two integers
 */
int main(int argc, char *argv[])
{
	int num1, num2, oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	    argv[2][0] != '%' && argv[2][0] != '/')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = get_op_func(argv[2])(num1, num2);
	printf("%d\n", oper);
	return (0);

}
