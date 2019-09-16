#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that insert a new node at a given pos
 * @h: double pointer where start the list
 * @idx: position for inset the node
 * @n: value for insert in the indes
 * Return: NULL if failed or the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode, *paux;

	if (*h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
	}
	else
	{
		paux = *h;
		for (i = 0; i < (idx - 1); i++)
		{
			if (paux)
				paux = paux->next;
		}
		if (paux->next)
		{
			newnode->next = paux->next;
			newnode->next->prev = newnode;
		}
		paux->next = newnode;
		newnode->prev = paux;
	}
	return (newnode);
}
