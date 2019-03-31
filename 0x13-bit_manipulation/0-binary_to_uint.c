#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - a function that converts a binary to unsigned.
 * @b: pointer to char.
 * Return: unsigned int. Number converted.
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i, r = 1;

	for (i = 1; i <= b; ++i)
		r *= a;
	for (i = 0; i > b;  --i)
		r /= a;

	return (0);
}
unsigned int binary_to_uint(const char *b)
{
	int len = 0;

	while (b[len] != '\0')
	{
		if (b[len] != '0' &&  b[len] != '1')
		{
			return (0);
		}
		len++;
	}

	unsigned int exp = 0;
	unsigned int num = 0;
	unsigned int sum = 0;

	for (len = len - 1; len >= 0; len--)
	{

		num = (int)b[len] - 48;
		sum = sum + num * _pow(2, exp);
		exp++;
	}
	return (sum);
}
