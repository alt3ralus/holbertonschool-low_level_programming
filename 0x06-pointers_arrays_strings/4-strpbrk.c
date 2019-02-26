#include "holberton.h"

/**
 * _strpbrk- Funt. that fills memory with a constant byte.
 * @s: char
 * @accept: char
 * Return: pointer if position s equal position accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++);
	{
		for (j = 0; accept[j] != '\0'; j++);
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
