#include "holberton.h"

/**
 * _abs-Use for get the absolute number
 *
 * @x:is the value
 * Return:the absolute
 */

int _abs(int x)
{
	if (x < 0)

		return (x * -1);
	else
		return (x);
}
