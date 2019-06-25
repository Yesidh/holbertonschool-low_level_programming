#include "holberton.h"
/**
 * _islower - print if a character is in  lowercase
 *
 *
 * Return: one if is lower zero isn't lower
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
		return (0);
}
