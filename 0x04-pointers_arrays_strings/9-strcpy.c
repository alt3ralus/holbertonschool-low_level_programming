#include "holberton.h"

/**
 * _strcpy - A function that prints half of a string.
 * @src: pointer char.
 * @dest: pointer char.
 * Return: char.
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
