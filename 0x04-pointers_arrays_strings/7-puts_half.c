#include "holberton.h"

/**
 * puts_half - A function that prints half of a string.
 * @str: pointer char.
 * Return: Void.
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)

		if (i % 2 == 0)
		{
			j = i / 2;
		}
		else
		{
			j = (i - 1) / 2;
			j = j + 1;
		}
	for ( ; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
