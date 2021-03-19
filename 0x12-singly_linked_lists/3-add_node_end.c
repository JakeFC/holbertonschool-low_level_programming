#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list_t list
 * @head: pointer to first element of list
 * @str: string to malloc and place in new node
 * Return: address of new element, or NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head)
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;
	return (new);
}
