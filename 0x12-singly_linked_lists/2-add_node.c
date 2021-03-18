#include "lists.h"

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
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to address of first node
 * @str: string to malloc and input into new node
 * Return: address of the new elements, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
