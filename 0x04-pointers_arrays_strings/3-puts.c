#include "holberton.h"
#include <stdio.h>
/**
 * _puts - function that prints an array
 * @str: variable char
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
