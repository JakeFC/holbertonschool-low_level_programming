#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list
 * @head: first node of the list
 * Return: sum of all data, or 0 if none
 */
int sum_listint(listint_t *head)
{
	int i, sum;
	listint_t *tmp;

	if (!head)
		return (0);
	tmp = head;
	for (sum = 0, i = 0; tmp; i++)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
