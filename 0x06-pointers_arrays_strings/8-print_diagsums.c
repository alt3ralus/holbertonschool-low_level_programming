#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Funt. that fills memory with a constant byte.
 * @size: int size of the matrix.
 * @a: pointer int type.
 * @sum1: gives the sum of first diagonal.
 * @sum2: gives the sum of the second diagonal.
 * Return: pointer.
 */

void print_diagsums(int *a, int size)
{
	int i, suma1;

	for (i = 0; i < size; i += size + 1)
	{
		suma1 = a[i];
	}
	printf("%d \n", suma1);


}
