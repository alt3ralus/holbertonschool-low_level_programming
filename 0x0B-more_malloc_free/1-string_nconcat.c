#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Allocates  memory using.
 * @s1: char ponter to
 * @s2: char pointer to
 * @n: unsigned int.
 * Return: char pointer to.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cadena;
	int i, j;


	for (i = 0; s1[i] != '\0'; i++)
	{}
	for  (j = 0; s2[j] != '\0'; j++)
	{}

	cadena =  malloc(i + n + 1);
	if (cadena == NULL)
	{
		return (NULL);
	}

	return (cadena);
}
