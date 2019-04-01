
#include "holberton.h"

/**
 * set_bit - set to 1 an index position of a binary.
 * @n: The int to convert.
 * @index: position in t
 * Return: Void.
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{

		*n = *n | (1 << index);

	return (1);
	}
	else
		return (-1);
}
