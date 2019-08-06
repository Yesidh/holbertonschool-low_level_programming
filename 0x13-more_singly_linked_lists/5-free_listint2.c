#include "lists.h"
/**
 * free_listint2 - Function that frees listint_t list
 * @head: pointer to pointer  to point to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *paux;

	if (&*head == NULL)
		return;
	paux = *head;
	while (*head)
	{
		paux = paux->next;
		free(*head);
		*head = paux;
	}
}
