#include "variadic_functions.h"
/**
 * sum_them_all - add all arguments in the function
 * @n:quantity of arguments
 *
 *
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list varlist;

	if (n == 0)
		return (0);
	va_start(varlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(varlist, int);
	va_end(varlist);
	return (sum);
}
