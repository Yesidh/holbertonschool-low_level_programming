#include "holberton.h"
#include <stdlib.h>
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

	while (dest[i])
		i++;
	while (src[j])
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
	int i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; *av; i++)
	{
	}
	av = malloc(i * sizeof(char) + 1);
	if (av == NULL)
		return (NULL);
	str = "perrada\ntime\nperrada\ntime";
	return (str);
}
