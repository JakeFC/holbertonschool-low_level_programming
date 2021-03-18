#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: list_t type single linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	if (h->next == NULL)
		return (1);
	return (1 + print_list(h->next));
}
