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
	int i;
	int cantidad = (max - min) + 1;


	cadena = malloc(sizeof(int) * (max - min) + 1);

	for (i = 0; i <= cantidad; i++)
	{
		cadena = i;
	}

	return (cadena);
}
