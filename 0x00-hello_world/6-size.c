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

	printf("size of a char: %ld.byte(s)\n", sizeof(b));
	printf("size of an int: %ld.bytes(s)\n", sizeof(c));
	printf("size of a long int: %ld.bytes(s)\n", sizeof(d));
	printf("size of a long long int: %ld.bytes(s)\n", sizeof(e));
	printf("size of a float: %ld.bytes(s)\n", sizeof(f));
	return (0);
}
