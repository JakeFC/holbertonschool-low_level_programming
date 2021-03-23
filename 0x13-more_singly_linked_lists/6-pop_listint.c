#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: address of the head pointer
 * Return: head node's data, or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head)
		return (0);
	if (!*head)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
