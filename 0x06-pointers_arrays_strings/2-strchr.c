#include "holberton.h"

/**
 * _strchr - Funt. that fills memory with a constant byte.
 * @s: char
 * @c: char
 * Return: pointer.
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; s[i] == '\0'; i++);

	if (s[1] == c)
	{
	return (s = i);
	}
}
