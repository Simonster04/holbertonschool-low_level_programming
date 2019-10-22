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
	unsigned int x;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);

}
