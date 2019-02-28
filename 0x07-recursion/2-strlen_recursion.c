#include "holberton.h"

/**
 * _strlen_recursion - A function that returns the length of the string
 * @s: char pointer
 * Return: int value. Len of var.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
