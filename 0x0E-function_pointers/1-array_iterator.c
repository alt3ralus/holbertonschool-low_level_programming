#include "function_pointers.h"

/**
 * array_iterator - Funct. executes a function given as a parameter.
 * @array: array of int.
 * @size: int size of array.
 * @action: Function to pointer.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL || size != 0 || array != 0)
	{

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
