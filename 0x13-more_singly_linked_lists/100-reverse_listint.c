#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to first node of list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *tmp;

	if (!head)
		return (NULL);
	if (!*head)
		return (NULL);
	if (!(*head)->next)
		return (*head);
	tmp = (*head)->next;
	while (tmp)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	*head = prev;
	return (*head);
}
