#include <stdio.h>
/**
 * first - function for print a string before the main
 * Return: nothing
 */

void  __attribute__((constructor))first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
