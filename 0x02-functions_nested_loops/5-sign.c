#include "holberton.h"

/**
 * print_sign - function prints sign of number + pos, - neg, 0 for 0"
 * @n: value
 *
 * Return: 1 positive, -1 negative and 0 for zero.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
