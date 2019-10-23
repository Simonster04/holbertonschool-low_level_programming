#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 * Return: memory allocation.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *new_dog;
	unsigned int name_len, owner_len, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->age = age;
	for (name_len = 0; name[name_len] != '\0'; name_len++)
	{}
	new_dog->name = malloc(name_len);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		new_dog->name[i] = name[i];
	}
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
	{}
	new_dog->owner = malloc(owner_len);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
	new_dog->owner[i] = owner[i];
	}
	return (new_dog);
}
