#include "lists.h"
/**
 * *add_nodeint_end - Function that adds a new node at the end of a listint_t
 * @head: pointer to pointer head
 * @n: the value to insert in the new node
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *recorrer;

	if (head == NULL && n)
		printf("Error\n");
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		recorrer = *head;
		while (recorrer->next)
			recorrer = recorrer->next;
		recorrer->next = newnode;
	}
	return (newnode);
}
