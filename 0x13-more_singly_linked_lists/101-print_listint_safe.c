#include "lists.h"

/**
 * loop_finder - finds the loop in a linked list
 * @head: first node in the list
 * Return: address where loop starts, or NULL if none
 */
listint_t *loop_finder(listint_t *head)
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
 * print_listint_safe - prints a singly linked list that can contain a loop
 * @head: pointer to first node of list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	char counter = 0;
	listint_t *loop, *trav;
	int n = 0;

	if (!head)
		return (0);
	if (!*head)
		exit(98);
	trav = (listint_t *)head;
	loop = loop_finder(trav);
	while (trav)
	{
		if (loop)
		{
			if (trav == loop && counter == 1)
			{
				printf("-> [%p] %d\n", (void *)trav, trav->n);
				break;
			}
			if (trav == loop && counter == 0)
				counter = 1;
		}
		printf("[%p] %d\n", (void *)trav, trav->n);
		trav = trav->next;
		n++;
	}
	return (n);
}
