#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -   returns a pointer to a new allocated spaces in memory.
 * @str: pointer char.
 *
 * Return: a new pointer.
 */

char *_strdup(char *str)
{
	int i, j;
	char *cadena;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)


		cadena = malloc((*str + 1) * sizeof(char));
	if (cadena == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i  ; j++)
	{
		cadena[j] = str[j];

	}
	cadena[i] = '\0';

	return (cadena);
}
