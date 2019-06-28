#include <stdio.h>
/**
 * main - print Fizz if is  multiples of 3
 * Buzz if is multiplies of 5
 * FizzBuzz if is multiplies of 5 and 3
 * Return: nothing
 */
int  main(void)
{
	int a, b, i = 1;

	while (i <= 100)
	{
		a = i % 3;
		b = i % 5;
		if ((a == 0) || (b == 0))
		{
			if ((a == 0) && (b != 0))
				printf("Fizz ");
			else if ((b == 0) && (a != 0) && (i <= 99))
				printf("Buzz ");
			else if ((b == 0) && (a != 0) && (i == 100))
				printf("Buzz");
			else if ((a == 0) && (b == 0))
				printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
