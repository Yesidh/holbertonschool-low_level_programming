#include "lists.h"
/**
 * free_listint - Function that frees listint_t list
 * @head: pointer to head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *paux;

	paux = head;
	while (head)
	{
		paux = paux->next;
		free(head);
		head = paux;
	}
}
