#include "holberton.h"
/**
 *Holberton - Write a function that checks uppercase char.
 *Description: addesso non mi viene
 *Return: Return 1 if uppercase or 0 otherwise.
 */
int _isupper(int c)
{
	if  (c > 64 &&  c < 91 )
	{
		return (1);
	}
	else
		return (0);
}
