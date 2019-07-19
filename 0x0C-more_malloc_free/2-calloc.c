#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocated memory and fill with 0
 * @nmemb: members of zize.
 * @size: the size bytes of each elements.
 *
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int x, y;

	y = size * nmemb;
	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(y);
	if (m == NULL)
		return (NULL);
	for (x = 0 ; x < y ; x++)
		m[x] = 0;
	return (m);
}
