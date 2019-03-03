#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - A function that concatenates two string.
 *
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		putchar(dest[i]);
	}
	for (j = 0; src[j] != '\0'; i++ , j++)
	{

	}
	putchar ('\n');
	return dest;
}
