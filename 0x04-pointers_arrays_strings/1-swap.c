#include "holberton.h"
/**
 * swap_int  - Re asign a value to n variable.
 *
 * @a: variable int.
 * @b: variable int.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
