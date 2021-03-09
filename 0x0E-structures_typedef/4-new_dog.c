#include <stdlib.h>
#include "dog.h"
char *str_return(char *str);

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = str_return(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = str_return(owner);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	return (dog);
}

/**
 * str_return - returns a string
 * @str: string input
 * Return: text of string, or NULL if none
 */
char *str_return(char *str)
{
	int i;
	char *s = NULL;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = 00;
	return (s);
}
