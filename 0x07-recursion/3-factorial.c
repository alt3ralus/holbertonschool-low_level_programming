#include "holberton.h"

/**
 * factorial - Function that returns the factorial of a number.
 * @n: int variable.
 * Return: an integer.
 */

int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}
