#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that delete a node at a given pos
 * @head: double pointer where start the list
 * @index: position for delete the node
 * Return: 1 if it succeeded, -1 if it failde
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *paux1, *paux2;

	if (*head == NULL)
		return (-1);
	paux2 = *head;
	if (index == 0)
	{
		paux1 = paux2->next;
		free(*head);
		*head = paux1;
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (paux1)
			paux1 = paux1->next;
	}
	paux1 = (paux2->next)->next;
	free(paux2->next);
	puax2->next = paux1;
	return (1);
}
