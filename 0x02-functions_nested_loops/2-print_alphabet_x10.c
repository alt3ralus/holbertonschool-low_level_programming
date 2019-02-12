#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	return (0);
}
