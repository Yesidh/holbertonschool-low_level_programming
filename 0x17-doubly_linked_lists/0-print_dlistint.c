#include "lists.h"
/**
 * print_dlistint - function that prints all elements of a dlistint_t list
 * @h: pointer where start the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	if (h->next == NULL && h->prev == NULL)
	{
		printf("%d\n", h->n);
		return(1);
	}
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return(i);
}
