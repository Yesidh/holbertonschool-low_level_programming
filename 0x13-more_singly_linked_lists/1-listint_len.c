#include "lists.h"
/**
 * listint_len - Function that return the number of elements in a linked
 * listintPt list.
 * @h: the head of the list.
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (NULL);
	if (h->next == NULL)
		return (1);
	for (i = 0; h->next; i++)
		h = h->next;
return (i + 1);
}
