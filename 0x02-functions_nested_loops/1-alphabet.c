#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int x = 97;

	while (x <= 122)
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
	return (0);
}
