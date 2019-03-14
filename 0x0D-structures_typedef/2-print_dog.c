#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Print the structue members.
 * @d: pointer to the structure dog.
 * Return: void.
 */



void print_dog(struct dog *d)
{

		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
