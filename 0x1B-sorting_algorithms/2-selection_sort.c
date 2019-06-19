#include "sort.h"
/**
 * selection_sort -  a function that sorts an array in ascending order.
 * @array: unsorted array to sort.
 * @size: size of the array
 * Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t count_a = 0, count_b = 0, aux = 0;
	size_t value = 0;

	if (array == NULL)
	{
		return;
	}

	for (count_a= 0; count_a < size - 1; count_a++)
	{
		value = count_a;
		for (count_b = count_a + 1; count_b < size; count_b++)
		{
			if (array[value] > array[count_b])
				value = count_b;
		}
		if (value != count_a)
			{
				aux = array[count_a];
				array[count_a] = array[value];
				array[value] = aux;
				print_array(array, size);
			}
	}
}
