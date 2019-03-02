#include "holberton.h"
/**
 * _isupper - Description  adesso non mi viene
 * @c: neanche mi viene adesso
 * Return: Return 1 if uppercase or 0 otherwise.
 */
int _isupper(int c)
{
	if  (c > 64 &&  c < 91)
	{
		return (1);
	}
	else
		return (0);
}
