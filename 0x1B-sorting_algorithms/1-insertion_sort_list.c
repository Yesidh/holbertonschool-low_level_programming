#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: double pointer for the head of double linked list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux1, *aux2, *aux3;
	int flag = 0, flag2 = 0;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
		return;

	aux1 = *list;
	aux1 = aux1->next;
	while (aux1)
	{
		aux3 = aux1->next;
		aux2 = aux1;
		while (aux1->prev != NULL && aux1->n < aux1->prev->n)
		{
			aux2 = aux1->prev;
			aux1->prev = aux2->prev;
			aux2->next = aux1->next;
			if (aux2->prev != NULL)
			{
				aux2->prev->next = aux1;
				flag = 1;
			}
			if (aux1->next != NULL)
				aux1->next->prev = aux2;
			aux1->next = aux2;
			aux2->prev = aux1;
			if (flag == 0)
				*list = aux1;
			print_list(*list);
			flag = 0;
			flag2 = 1;
		}
		if (flag2 == 0)
			aux1 = aux1->next;
		else
			aux1 = aux3;
	}
}
