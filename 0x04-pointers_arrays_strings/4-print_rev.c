#include "holberton.h"

/**
 * print_rev - A function that prints in reverse
 * @s: Char pointer..
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{

	}
	i = i - 1;

	for ( ; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
