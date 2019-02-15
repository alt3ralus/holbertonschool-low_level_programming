#include "holberton.h"
 /**
 * print_numbers - Description  print number from 0 to 9.
 *
 * Return: Return void.
 */

void print_numbers(void)
{
	int  x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
