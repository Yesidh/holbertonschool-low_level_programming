#include "lists.h"
/**
 *list_len - function that returns the number of elements in a linked list.
 *@h: list pointer
 *Return: the numbers of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0 ; h ; i++)
		if (h->str)
			h = h->next;
		else
			h = h->next;
	return (i);
}
