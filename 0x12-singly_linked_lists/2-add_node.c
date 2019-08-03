#include "lists.h"
/**
 *add_node - function that add a new node at the beggining of a list_t list
 *@head: head of the list
 *@str: pointer to a char
 *Return: nothing
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t i;

	if (str && head == NULL)
		return (0);
	for (i = 0; str[i] ; i++)
		;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
