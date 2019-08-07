#include "lists.h"
/**
 * listint_len - Function that return the number of elements in a linked
 * listintPt list.
 * @h: the head of the list.
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while(h->next)
	{
		h = h->next;
		i++;
	}
	return (i);
}
