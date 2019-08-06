#include "lists.h"
/**
 * get_nodeint_at_index - Function that return the nth node of a listint_t
 * @head: pointer to pointer  to point to head
 * @index: index of a node to return
 * Return: node with match with index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *paux;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	paux = head;
	for (i = 0; i < index; i++)
		paux = paux->next;
	return (paux);
}
