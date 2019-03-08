#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range  - Creates an array of integers..
 * @min: minimun amount of integers of the array.
 * @max: maximun amount of integers of the array.
 * Return: An int.
 */

int *array_range(int min, int max)
{
	int *cadena;
	int i, j = 0;
	int cantidad = (max - min) + 1;

	if (min > max)
		return (NULL);

	cadena = malloc(sizeof(int) * cantidad);

	if (cadena == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		cadena[j] = i;

		j++;
	}
	return (cadena);
}
