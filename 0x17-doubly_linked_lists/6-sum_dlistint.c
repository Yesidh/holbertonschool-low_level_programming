#include "lists.h"
/**
 * sum_dlistint - Function that add all node->n values
 * @head: pointer where start the list
 * Return: the sum of all n values
 */
int sum_dlistint(dlistint_t *head)
{
	size_t i;
	int sum;

	if (head == NULL)
		return (0);
	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
