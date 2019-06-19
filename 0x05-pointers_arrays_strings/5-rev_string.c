#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - A function that concatenates two string.
 * @s: pointer to char
 * Return: char dest
 */
void rev_string(char *s)
{
	int x;
	char * tmp;
	tmp = s;

	for(x = 0; s[x]; x++)
	{
		tmp[x] = s[x];
	}

	for (x = x - 1; tmp[x] >= 0; x--)
	{
		putchar(tmp[x + 0]);

	}
	putchar('\n');


}
