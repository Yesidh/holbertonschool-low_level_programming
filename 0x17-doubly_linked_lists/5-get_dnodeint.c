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

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
