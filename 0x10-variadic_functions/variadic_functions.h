#ifndef VFUNCTION
#define VFUNCTION
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct fs - struc for call functions
 * @c: pointer char
 * @ptr: pointer function
 * Description: struc to use an array of functions
 */
typedef struct fs
{
	char *c;
	void (*ptr)();
} fs_1;
#endif
