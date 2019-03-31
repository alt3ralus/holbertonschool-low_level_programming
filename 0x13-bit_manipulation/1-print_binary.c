
#include "holberton.h"

/**
 * print_binary - Fun.convert decimal to bin.
 * @n: The int to convert.
 * Return: Void.
 */


void print_binary(unsigned long int n)
{
	int bit, result, size = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (bit = 31; bit >= 0; bit--)
	{

		result = n >> bit;

		if (result == 0)
			size++;
		else
			bit = 0;
	}

	for (bit = 31 - size; bit >= 0; bit--)
	{
		result = n >> bit;

		if (result & 1)
			_putchar('1');
		else
			_putchar('0');

	}

}
