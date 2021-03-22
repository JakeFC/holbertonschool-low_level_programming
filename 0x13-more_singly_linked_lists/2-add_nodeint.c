#include "lists.h"

#ifndef _STRLEN_C
#define _STRLEN_C
/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	return (a);

}
#endif
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to address of first node
 * @n: int data for new node
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
