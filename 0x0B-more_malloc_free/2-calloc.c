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
	char  *cadena;
	unsigned int i = i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	cadena = malloc(nmemb * size);
	for (i = 0; i < size; i++)
	{
		cadena[i] = cadena[0];
	}
	return (cadena);
}
