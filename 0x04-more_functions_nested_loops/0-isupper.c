#include "holberton.h"
/**
 * _isupper - function that print if a letter is upper
 *@c: letter in ascci code to find if is upper
 *
 * Return: Zero isn't upper
 * Retun: one if is upper
 */
int _isupper(int c)
{
	if  ((c >= 41) && (c <= 90))
		return (1);
	return (0);
}
