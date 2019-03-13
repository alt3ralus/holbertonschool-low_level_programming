#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that initialize a variable of type.
 * @d: pointer to a function.
 * @name: pointer
 * @age:float
 * @owner:  pointer
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
