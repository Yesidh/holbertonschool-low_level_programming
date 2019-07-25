#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - function that selects the coorect function to perform the
 * operation asked by the user.
 * @s: pointer to a operator char
 * Return: a pointer to the function that corresponds to the operator given
 * as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_add},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *(s + 0) && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
