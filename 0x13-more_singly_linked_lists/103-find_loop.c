#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: first node in the list
 * Return: address where loop starts, or NULL if none
 */
listint_t *find_listint_loop(listint_t *head)
{
	char counter, check = 0;
	listint_t *trav, *tort, *hare, *prev;

	if (!head)
		return (NULL);
	if (!head->next)
		return (NULL);
	trav = head;
	for (; trav; trav = trav->next)
	{
		counter = 0, tort = head, hare = head->next;
		while (tort && hare && hare->next)
		{
			if (tort == trav)
			{
				if (counter == 0)
					counter = 1;
				else
				{
					check = 1;
					break;
				}
			}
			if (tort == hare)
				break;
			if (!hare->next || !hare->next->next)
				return (NULL);
			prev = tort;
			tort = tort->next, hare = hare->next->next;
		}
		if (check == 1)
		{
			return (prev);
		}
	}
	return (NULL);
}
