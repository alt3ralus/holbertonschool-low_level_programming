#include "holberton.h"

/**
 * binary_to_uint - a function that converts a binary to unsigned.
 * @b: pointer to char.
 * Return: unsigned int. Number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numero = numero;
	unsigned int count = NULL;


	if (( *b != '0' && *b != '1') || b == NULL)
	{
		return (0);
	}
	else
	{
		for (count = 0; b[count] != '\0'; count++)
		{
			numero = 'b' - 48;
		}
		return (numero);
	}
}
