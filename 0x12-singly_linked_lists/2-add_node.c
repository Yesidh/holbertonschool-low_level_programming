#include "lists.h"
/**
 *add_node - function that add a new node at the beggining of a list_t list
 *@head: head of the list
 *@str: pointer to a char
 *Return: nothing
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (head && str && new)
		printf("error\n");
	new->str = "yesid";
	new->len = 35;
	new->next = NULL;

	return (new);
}
