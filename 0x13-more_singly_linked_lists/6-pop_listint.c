#include "lists.h"
/**
 * pop_listint - Function that frees listint_t list
 * @head: pointer to pointer  to point to head
 * Return: the data of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *paux;
	int n;

	if ((*head) == NULL)
		return (0);
	paux = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = paux;
	return (n);
}
