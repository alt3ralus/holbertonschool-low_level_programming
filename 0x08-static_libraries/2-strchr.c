#include "holberton.h"

/**
 * _strchr - Funt. that fills memory with a constant byte.
 * @s: char
 * @c: char
 * Return: pointer.
 */

char *_strchr(char *s, char c)
{
	for (; s[0]; s++);
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
