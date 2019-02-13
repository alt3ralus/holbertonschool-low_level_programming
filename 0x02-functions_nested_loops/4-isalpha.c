#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @c: check speling.
 *
 * Return: 1 for lowercase and upercase or 0 for otherwise.
 */

int _isalpha(int c)
{

	if ((c > 96 && c < 123) || (c > 64 && c < 92))
	{
		return (1);
	}
	return (0);
}
