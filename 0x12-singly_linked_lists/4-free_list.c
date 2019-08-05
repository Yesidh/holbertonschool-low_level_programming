#include "lists.h"
/**
 *free_list - function that frees a list_t list
 *@head: head of the list
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *paux;

	paux = head;
	while (head)
	{
		paux = paux->next;
		free(head->str);
		free(head);
		head = paux;
	}
}
