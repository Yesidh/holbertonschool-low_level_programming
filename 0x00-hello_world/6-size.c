#include <stdio.h>
/**
 * main - prints  with command printf
 *
 *
 *
 *
 * Return: return 0
 */
int main(void)
{
	chart b;
	int c;
	long int d;
	long long int e;
	float f;
	printf("size of a char: %ld. bytes \n", (unsigned long)sizeof(b));
	printf("size of a int: %ld. bytes \n", (unsigned long)sizeof(c));
	printf("size of a long int: %ld. bytes \n", (unsigned long)sizeof(d));
	printf("size of a long long int: %ld. bytes \n", (unsigned long)sizeof(e));
	printf("size of a float: %ld. bytes \n", (unsigned long)sizeof(f));
	return (0);
}
