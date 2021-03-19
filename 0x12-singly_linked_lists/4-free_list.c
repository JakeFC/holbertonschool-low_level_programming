#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first element in list
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	if (!head->next)
	{
		free(head->str);
		free(head);
	}
	else
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
