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
	unsigned int nalen, owlen, cont;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (nalen = 0; name[nalen]; nalen++)
		;
	nalen += 1;
	new_dog->name = malloc(nalen);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (cont = 0; cont < nalen; cont++)
		new_dog->name[cont] = name[cont];
	new_dog->age = age;
	for (owlen = 0; owner[owlen]; owlen++)
		;
	owlen += 1;
	new_dog->owner = malloc(owlen);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (cont = 0; cont < owlen; cont++)
		new_dog->owner[cont] = owner[cont];
	return (new_dog);
}
