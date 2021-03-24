#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: address of pointer to first node
 * @idx: index in list of node to be deleted
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp, *tmp2;
	unsigned int i;

	if (!head)
		return (-1);
	tmp = *head;
	if (idx == 0)
	{
		if (!tmp)
			return (-1);
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}
	if (!tmp)
		return (-1);
	if (!tmp->next)
		return (-1);
	tmp2 = tmp->next;
	tmp->next = tmp->next->next;
	free(tmp2);
	return (1);
}
