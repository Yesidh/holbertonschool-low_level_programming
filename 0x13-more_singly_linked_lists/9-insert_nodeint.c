#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node at a given positi
 * @head: pointer to pointer head
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *paux1;
	unsigned int i;

	if (&*head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		paux1 = *head;
		for (i = 0; i < (idx - 1); i++)
		{
			if (paux1)
				paux1 = paux1->next;
		}
		newnode->next = paux1->next;
		paux1->next = newnode;
	}
	return (paux1);
}
