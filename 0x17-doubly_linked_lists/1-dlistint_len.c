#include "lists.h"
/**
 * dlistint_len - Function that returns the lenght of double linked lists
 * @h: pointer where start the list
 * Return: lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	if (h->next == NULL && h->prev == NULL)
		return (1);
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
