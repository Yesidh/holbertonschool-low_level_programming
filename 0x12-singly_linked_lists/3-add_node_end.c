#include "lists.h"
/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *@head: head
 *@str: sring
 *Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	size_t i;
	list_t *newnode, *recorrer;

	if (str && head == NULL)
		printf("Error\n");
	for (i = 0; str[i]; i++)
		;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = i;
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
