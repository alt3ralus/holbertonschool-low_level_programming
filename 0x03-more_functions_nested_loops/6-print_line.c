#include "holberton.h"
/**
 * print_line - A function that prints a line n times.
 * @n: Number of times.
 * Return: Void.
 */


void print_line(int n)
{
	int i = 0;

	if (i < n)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	else
	{}

	_putchar('\n');

}
