#include "holberton.h"

/**
 * _memcpy - Funt. that fills memory with a constant byte.
 * @dest: char
 * @src: char
 * @n: int unsigned.
 * Return: pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <=  n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
