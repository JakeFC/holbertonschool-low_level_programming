#include <stdlib.h>
#include "dog.h"

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
	dog->name = name;
	if (dog->name == NULL)
		return (NULL);
	dog->age = age;
	dog->owner = owner;
	if (dog->owner == NULL)
		return (NULL);
	return (dog);
}
