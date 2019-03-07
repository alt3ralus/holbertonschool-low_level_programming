#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates  memory using.
 * @b: aunsigned int
 *
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *puntero;


	puntero=malloc(b);

	if (puntero == NULL)
	{
		exit(98);
	}
	return((void*)puntero);

}
