#include "holberton.h"

/**
 * _puts - function that prints an array
 * @str: variable char
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
