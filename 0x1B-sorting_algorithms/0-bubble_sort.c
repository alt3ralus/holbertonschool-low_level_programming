#include "sort.h"
/**
 * bubble_sort - that sorts an array of integers in ascending order
 * @array: array of int.
 * @size: the ssize of array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int a = 0, b = 0, tmp = 0, count = 0;


	if (array == NULL)
		return;

	for (a = 0; a < size - 1; a++)
	{
		for (b = a + 1; b < size; b++)
		{
			if (array[a] > array[b])
			{
				tmp = array[b];
				array[b] = array[a];
				array[a] = tmp;
				count++;
			}
			if (count % 2 == 0)
				print_array(array, size);

		}


	}

}
