#include "holberton.h"
/**
 * prime_aux - integer number to fin if is prime
 *@n: integer number to find if is print
 *@i: count and divisor of n
 *
 * Return: 1 if is a prime number
 */
int prime_aux(int n, int i)
{
	if (n % i == 0)
		return (1);
	if ((n / i) < i && (n % i) != 0)
		return (1);
	return (prime_aux(n, i + 1));
}

/**
 * is_prime_number - print if a number is prime
 *@n: integer number to find if is prime
 *
 *
 * Return: 1 if is a prime number
 */
int is_prime_number(int n)
{
	int i = 1;

	if (n <= 1)
		return (0);
	return (prime_aux(n, i));
}
