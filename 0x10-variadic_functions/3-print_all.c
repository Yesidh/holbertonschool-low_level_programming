#include "variadic_functions.h"
/**
 * print_char - function that prints a character
 * @anything: variable type va_list
 * Return: nothing
 */
void print_char(va_list anything)
{
	printf("%c", va_arg(anything, int));
}
/**
 * print_int - function that prints an integer number
 * @anything: variable type va_list
 * Return: nothing
 */
void print_int(va_list anything)
{
	printf("%d", va_arg(anything, int));
}
/**
 * print_float - function that prints a float number
 * @anything: variable type va_list
 * Return: nothing
 */
void print_float(va_list anything)
{
	printf("%f", va_arg(anything, double));
}
/**
 * print_string - function that prints a string
 * @anything: variable type va_list
 * Return: nothing
 */
void print_string(va_list anything)
{
	char *toprint;

	toprint = va_arg(anything, char *);
	if (toprint == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", toprint);
}
/**
 * print_all - print anything
 * @format: constant format to print
 *
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	unsigned int i = 0, j = 0, k = 0;

	fs_1 vec[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(anything, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == vec[j].c[0])
			{
				switch (k)
				{
				case 0:
					break;
				default:
					printf(", ");
				}
				vec[j].ptr(anything);
				k++;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(anything);
}
