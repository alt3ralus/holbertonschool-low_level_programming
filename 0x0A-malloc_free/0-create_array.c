#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - A Function that create an array.
 * @size: unsigned var.
 * @c: char var.
 * Return: a pointer char.
 */
char *create_array(unsigned int size, char c)
{
	char *cadena;
	unsigned int i;

	cadena = malloc(sizeof(char) * size);

	if (size == 0 || cadena == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		cadena[i] = c;
	return (cadena);
}
