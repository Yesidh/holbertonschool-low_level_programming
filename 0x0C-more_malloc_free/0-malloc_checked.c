#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *@b: lenght for malloc
 *
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int  *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
