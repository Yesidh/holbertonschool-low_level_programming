#include "variadic_functions.h"
/**
 * print_strings - print strings followed by new line
 * @separator: string to be printer between strings
 * @n: quantity of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strlist;
	char *toprint;

	va_start(strlist, n);
	for (i = 0; i < n; i++)
	{
		toprint = va_arg(strlist, char *);
		if (toprint == NULL)
			printf("(nil)");
		else
			printf("%s",  toprint);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strlist);
}
