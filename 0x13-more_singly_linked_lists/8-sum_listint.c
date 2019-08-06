#include "lists.h"
/**
 * sum_listint - Function that return the sum of all data (n) of a listint_t
 * @head: head pointer
 * Return: node with match with index
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	if (head->next == NULL)
		sum += head->n;
	return (sum);
}
