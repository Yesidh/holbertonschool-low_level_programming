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
	while (head->next != NULL && paux->next != NULL)
	{
		paux = paux->next;
		free(head->str);
		free(head);
		head = paux;
	}
	if (head->next == NULL && paux->next == NULL)
	{
		free(head->str);
		free(head);
		free(paux->str);
		free(paux);
	}
}
