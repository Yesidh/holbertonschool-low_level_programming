#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: the head of the list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
		printf("Error\n");
	while (h->next)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
return (i);
}
