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
	listint_t *tmp, *new;
	unsigned int i;

	if (!head)
		return (NULL);
	if (!*head)
	{
		if (idx != 0)
			return (NULL);
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (tmp)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
		new->next = NULL;
	return (new);
}
