#include "holberton.h"
/**
 * _isdigit - function that print if a character is a number
 *@c: character in ascci code to find if is number
 *
 * Return: Zero isn't digit
 * Retun: one if is digit
 */
int _isdigit(int c)
{
	if  ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
