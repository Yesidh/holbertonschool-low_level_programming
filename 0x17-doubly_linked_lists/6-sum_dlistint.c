#include "lists.h"
/**
 * sum_dlistint - Function that add all node->n values
 * @head: pointer where start the list
 * Return: the sum of all n values
 */
int sum_dlistint(dlistint_t *head)
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
