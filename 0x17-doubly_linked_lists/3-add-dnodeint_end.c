#include "lists.h"
/**
 * add_dnodeint_end - insert a new node at the end of a list
 * @head: double pointer where start the list
 * @n: The value for insert in the new node
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *recorrer;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	else
	{
		recorrer = (*head);
		while (recorrer->next)
			recorrer = recorrer->next;
		recorrer->next = newnode;
		newnode->prev = recorrer;
		newnode->next = NULL;
	}
	return (newnode);
}
