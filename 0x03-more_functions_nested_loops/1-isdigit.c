#include "holberton.h"

/**
 * _isdigit - Description adesso non mi viene
 * @c: non mi viene adesso neanche.
 * Return: Return 1 if digit  or 0 otherwise.
 */
int _isdigit(int c)
{
	if  (c > 47 &&  c < 58)
	{
		return (1);
	}
	else
		return (0);
}
