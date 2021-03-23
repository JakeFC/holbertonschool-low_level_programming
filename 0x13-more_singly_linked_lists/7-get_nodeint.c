#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: address of head pointer to list
 * @index: index of list to return
 * Return: node's address at index, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);
	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
