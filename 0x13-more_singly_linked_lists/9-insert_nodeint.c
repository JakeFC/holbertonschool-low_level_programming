#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: address of pointer to first node
 * @idx: index of list where new node should be added
 * @n: data of new node
 * Return: address of new node, or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *tmp, *new;
	unsigned int i;

	if (!head)
		return (NULL);
	if (!*head)
	{
		new = malloc(sizeof(listint_t));
		*head = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}
	trav = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (!trav)
			return (NULL);
		trav = trav->next;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	tmp = trav->next;
	trav->next = new;
	new->n = n;
	new->next = tmp;
	return (new);
}
