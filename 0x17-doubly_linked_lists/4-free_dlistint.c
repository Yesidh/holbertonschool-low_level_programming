#include "lists.h"
/**
 * free_dlistint - Function that free a double linked list
 * @head: double pointer where start the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *recorrer;

	recorrer = head;
	while (head)
	{
		recorrer = recorrer->next;
		free(head);
		head = recorrer;
	}
}
