#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer 2D  array.
 * @width: int
 * @height: int
 * Return: pointer to pointer.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **cadena = 0;

	if (height == 0 || width == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{}
	for (j = 0; j < width; j++)
	{}
	return (cadena);
}
