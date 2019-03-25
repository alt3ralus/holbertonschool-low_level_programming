#include "holberton.h"

/**
 * print_diagonal - A function that draws a diagonal line.
 * @n: n times a diagonal and same n spaces.
 * Return: Void
 */
void print_diagonal(int n)
{
	int i, j;


	for (i = 0; i <= n; i++)
	{
		for (j = 0; j >= n; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}

}
