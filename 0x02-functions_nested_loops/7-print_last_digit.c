#include "holberton.h"

/**
 * print_last_digit
 * @x:value
 * Return: last digit
 */

int print_last_digit(int r)
{
	int y = r % 10;

	if (y < 0)
	{
		y = y * -1;
	}
	_putchar(y + '0');
	return (y);
}
