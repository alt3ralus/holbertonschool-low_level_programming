#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @c: check speling.
 *
 * Return: 1 for lowercase or 0 for otherwise.
 */

int _islower(int c)
{

	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
