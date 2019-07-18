#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen_recursion - returns the length of a string
 *@s: string
 *
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (s && *s)
		return (_strlen_recursion(++s) + 1);
	else
		return (0);
}
/**
 * _strcat - concatenate two string
 * @dest:dest pointer
 * @src: source pointer
 *
 * Return: the  dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest && dest[i])
		i++;
	while (src && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

/**
 * argstostr - frees 2 dimensional array previosly created
 *@ac: size of arguments
 *@av: arguments
 *
 * Return: pointer with new arguments (arguments)
 */
char *argstostr(int ac, char **av)
{
	int i, ln = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i <= ac; i++)
		ln += _strlen_recursion(av[i]) + 1;
	str = malloc(ln + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}
	return (str);
}
