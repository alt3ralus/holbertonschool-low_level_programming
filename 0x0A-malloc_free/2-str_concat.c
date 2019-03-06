#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 str.
 * @s1: char var.
 * @s2: char var.
 * Return: var char type.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;

	char *cadena;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)


	cadena = malloc((i + j) * sizeof(char));

	if (cadena == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		cadena[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		cadena[i] = s2[j];
	}
	cadena[i] = '\0';
	return (cadena);
}
