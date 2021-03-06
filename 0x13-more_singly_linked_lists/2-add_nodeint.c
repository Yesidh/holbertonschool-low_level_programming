#include "lists.h"
/**
 * *add_nodeint - Function that adds a new node at the beginning of a listint_t
 * @head: pointer to pointer head
 * @n: the value to insert in the new node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL && n)
		printf("Error\n");
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
