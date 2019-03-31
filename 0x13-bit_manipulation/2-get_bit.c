
#include "holberton.h"

/**
 * get_bit - Print index position of a binary.
 * @n: The int to convert.
 * @index: position in t
 * Return: Void.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	int bit, result;
	int cadena[64];


	if (n == 0)
	{

		return (0);
	}

	if (index > 63)
		return (-1);


	for (bit = 63; bit >= 0; bit--)
	{
		result = n >> bit;

		if (result & 1)
			cadena[bit] = 1;
		else
			cadena[bit] = 0;

	}
	return (cadena[index]);
}
