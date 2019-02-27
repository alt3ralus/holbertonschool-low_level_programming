#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string plus new line.
 * @s: ponter to a char.
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
