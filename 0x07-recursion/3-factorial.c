#include "holberton.h"

/**
 * factorial - Function that returns the factorial of a number.
 * @n: int variable.
 * Return: an integer.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
