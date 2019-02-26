#include "holberton.h"

/**
 * _strspn - Funt. that fills memory with a constant byte.
 * @s: char
 * @accept: char
 * Return: pointer.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int x = 0;

	for ( ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				x = x + 1;
		}
		if (x == i)
			break;
	}
	return (x);
}
