#include "lists.h"
/**
 * get_dnodeint_at_index - Function that return a node
 *                         into a double linked list
 * @head: pointer where start the list
 * @index: position for return node
 * Return: the node in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;
	dlistint_t *paux;

	if (head == NULL)
		return (NULL);
	paux = head;
	for (i = 0; i < index; i++)
		if (paux)
			paux = paux->next;
	return (paux);
}
