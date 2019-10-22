#include "dog.h"

/**
 * init_dog -  initialize a variable
 * @d: pointer
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
