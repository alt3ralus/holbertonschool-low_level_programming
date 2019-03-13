#include "function_pointers.h"
/**
 * int_index - Afunction that searches for an int.
 * @array: array of int.
 * @size: int
 * @cmp: pointer to function
 * Return: an int of the position of the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
