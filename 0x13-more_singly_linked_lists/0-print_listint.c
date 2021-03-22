#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * h: listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int x;

	if (!h)
		return (0);
	tmp = h;
	for (x = 0; tmp->next; x++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->n);
	x++;
	return (x);
}
