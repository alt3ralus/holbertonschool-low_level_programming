#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string plus new line.
 * @s: ponter to a char.
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	_puts_recursion(s + 1);
		}
	else
		_putchar('\n');
}
