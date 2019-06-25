#include "holberton.h"
/**
 * _isalpha - print if a character is alphabetic
 * @c: The character for character check
 *
 * Return: one if is character zero isn't character
 */
int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		return (1);
	}
	else
		return (0);
}
