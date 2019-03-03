#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - A function that concatenates two string.
 * @dest: pointer to char
 * @src: pointer to char.
 * Return: char dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
