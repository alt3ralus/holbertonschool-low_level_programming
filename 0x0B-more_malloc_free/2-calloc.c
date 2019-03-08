#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - create an sapce memory for  array.
 * @nmemb: unsigned int.
 * @size: unsigned int
 * i: iteration int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cadena;
	int i = i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	cadena = malloc(nmemb * size);


	return (cadena);
}
