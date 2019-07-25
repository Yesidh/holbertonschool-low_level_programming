#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function that add two integers
 * @a: first number
 * @b: second number
 * Return: the add of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that return the difference of two integers
 * @a: first number
 * @b: second number
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies two integers
 * @a: first number
 * @b: second number
 * Return: the result  of multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divide two integers
 * @a: first number
 * @b: second number
 * Return: the divition of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that return module of  two integers
 * @a: first number
 * @b: second number
 * Return: the module of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
