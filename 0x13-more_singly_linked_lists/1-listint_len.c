#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: listint_t list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int x;

	if (!h)
		return (0);
	tmp = h;
	for (x = 0; tmp->next; x++)
		tmp = tmp->next;
	x++;
	return (x);
}
