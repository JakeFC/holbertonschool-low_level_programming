#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: first node in the list
 * Return: address where loop starts, or NULL if none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort = head, *hare = head;

	if (!head)
		return (NULL);
	while (hare && hare->next)
	{
		if (!hare)
			return (NULL);
		if (tort == hare)
			for (hare = head; 1; hare = hare->next)
				if (tort == hare)
					return (tort);
		tort = tort->next, hare = hare->next->next;
	}
	return (NULL);
}
