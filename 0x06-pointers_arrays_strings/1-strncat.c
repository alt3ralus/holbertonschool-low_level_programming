#include "holberton.h"
/**
 * _strncat - A function that concatenates two strings.
 * @dest: pointer to char.
 * @src: pointer to char.
 * @n: an int.
 * Return: a pointer to char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;


	for (i = 0; dest[i]; i++)
	{

	}


	for (j = 0; src[j] != '\0' && j < n ; j++)
	{

		dest[i] = src[j];
		i++;
	}

	dest[i + j] = '\0';
	return (dest);
}
