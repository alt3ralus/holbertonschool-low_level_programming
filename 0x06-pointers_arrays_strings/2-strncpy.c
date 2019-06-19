#include "holberton.h"
/**
 * _strncpy - a function that copies an string.
 * @dest: pointer to string.
 * @src: pointer to string.
 * @n: an integer.
 * Return: a char pointer to.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
