#include "holberton.h"

/**
 * _memset - Funt. that fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: int unsigned.
 * Return: pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++);
	{
		for (j = 0; accept[j] != '\0'; j++);
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
