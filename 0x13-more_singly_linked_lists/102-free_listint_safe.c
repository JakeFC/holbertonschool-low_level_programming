#include "lists.h"

/**
 * find_loop - finds the loop in a linked list
 * @head: first node in the list
 * Return: address where loop starts, or NULL if none
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *tort = head, *hare = head;

	if (!head)
		return (NULL);
	while (hare && hare->next)
	{
		tort = tort->next, hare = hare->next->next;
		if (!hare)
			return (NULL);
		if (tort == hare)
			for (hare = head; 1;)
			{
				if (tort == hare)
					return (tort);
				tort = tort->next;
				hare = hare->next;
			}
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a listint_t list, even with a loop
 * @h: address of pointer to first node
 * Return: size of list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	char counter = 0;
	listint_t *trav, *tmp, *loop;
	int n = 0;

	if (!h)
		return (0);
	trav = *h;
	loop = find_loop(*h);
	while (trav)
	{
		if (loop)
		{
			if (trav == loop && counter == 1)
				break;
			if (trav == loop && counter == 0)
				counter = 1;
		}
		tmp = trav->next;
		free(trav);
		trav = tmp;
		n++;
	}
	*h = NULL;
	return (n);
}
