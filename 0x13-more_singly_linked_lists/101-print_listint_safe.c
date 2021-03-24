#include "lists.h"

/**
 * print_listint_safe - prints all elements of a listint_t list without looping
 * @head: listint_t list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	int x;

	if (!head)
		exit(98);
	tmp = head->next;
	for (x = 0; tmp; x++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		if (tmp == head)
			return (x + 1);
	}
	return (x);
}
