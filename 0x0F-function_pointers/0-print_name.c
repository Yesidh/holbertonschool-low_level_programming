#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to functions to prints the names
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
