#include "lists.h"
/**
 * print_dlistint - function that prints all elements of a dlistint_t list
 * @h: pointer where start the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	if (h->next == NULL && h->prev == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
