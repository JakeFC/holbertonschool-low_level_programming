#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to first node of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmph, *tmp;

	tmph = *head;
	while (tmph)
	{
		tmp = tmph->next;
		free(tmph);
		tmph = tmp;
	}
	*head = NULL;
}
