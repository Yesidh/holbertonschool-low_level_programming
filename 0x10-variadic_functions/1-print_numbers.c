#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by new line
 * @separator: string to be printer between numbers
 * @n: quantity of numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numlist;

	va_start(numlist, n);
	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%d",  va_arg(numlist, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		else if (separator == NULL)
			printf("%d",  va_arg(numlist, int));
	}
	printf("\n");
	va_end(numlist);
}
