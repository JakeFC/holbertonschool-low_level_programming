#include "lists.h"

/**
 * list_len - returns number of elements of a list_t list
 * @h: list_t type single linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
