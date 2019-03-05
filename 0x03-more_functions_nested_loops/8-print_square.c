#include <stdio.h>

/**
 * main  - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;


	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			putchar(35);
		}
		putchar('\n');
	}
	if (size == 0)
	{
		putchar('\n');
	}
}
