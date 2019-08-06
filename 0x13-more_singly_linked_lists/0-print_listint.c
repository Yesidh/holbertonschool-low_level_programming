#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: the head of the list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		printf("Error\n");
	for (i = 0; h->next; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	if (h->next == NULL)
		printf("%d\n", h->n);
return (i + 1);
}
