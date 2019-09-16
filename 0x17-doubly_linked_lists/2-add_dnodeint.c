#include "lists.h"
/**
 * add_dnodeint - insert a new node at the beggining of a list
 * @head: pointer where start the list
 * @n: The value for insert in the new node
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	newnode->n = n;
	(*head)->prev = newnode;
	newnode->next = (*head);
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}
