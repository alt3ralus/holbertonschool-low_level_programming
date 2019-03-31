#include "holberton.h"
/**
 * _pow  - a function that converts a binary to unsigned.
 * @a: int.
 * @b: int.
 * Return: pow of a number.
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i, r = 1;

	for (i = 1; i <= b; ++i)
		r *= a;
	for (i = 0; i > b; --i)
		r /= a;

	return (r);
}

/**
 * binary_to_uint - a function that converts a binary to unsigned.
 * @b: pointer to char.
 * Return: unsigned int. Number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;

	unsigned int exp = 0;
	unsigned int num = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);


	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		len++;
	}


	for (len = len - 1; len >= 0; len--)
	{

		num = (int)b[len] - 48;

		sum = sum + num * _pow(2, exp);

		exp++;
	}

	return (sum);
}
