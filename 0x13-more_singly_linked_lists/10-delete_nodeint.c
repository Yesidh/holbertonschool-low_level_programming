#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes at index of a listin_t
 * @head: pointer to pointer head
 * @index: index of the list where the node should be delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *paux1, *paux2;
	unsigned int i;

	if (&*head == NULL)
		return (-1);
	paux1 = *head;
	if (index == 0)
	{
		paux1 = paux1->next;
		free(*head);
		*head = paux1;
		return (1);
	}
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (paux1)
				paux1 = paux1->next;
		}
		paux2 = paux1;
		paux2 = paux2->next;
		paux1->next = paux2->next;
		free(paux2);
		return (1);
	}
}
