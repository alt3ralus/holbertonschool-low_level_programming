#include "holberton.h"

/**
 * _strcat - A function that concatenates two string.
 *
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; i++)
	{
		_putchar(dest[i]);
		_putchar(src[j]);
	}

	_putchar('\n');
	returns ();
}
