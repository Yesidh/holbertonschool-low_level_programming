#include "lists.h"
/**
 *print_list - function that print all elements of a list_t list
 *@h: list pointer
 *Return: the numbers of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0 ; h ; i++)
		if (h->str)
		{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		}
		else
		{
			printf("[0] %p\n", h->str);
			h = h->next;
		}
	return (i);

}
