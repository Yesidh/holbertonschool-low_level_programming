#include "lists.h"
/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *@head: head
 *@str: sring
 *Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{


	list_t *new = malloc(sizeof(list_t));

	if (head && str && new)
		printf("error\n");
	new->str = "yesid";
	new->len = 35;
	new->next = *head;
	*head = new;

	return (new);
}
