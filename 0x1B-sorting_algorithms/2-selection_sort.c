#include "sort.h"
/**
 * selection_sort -  a function that sorts an array in ascending order.
 * @array: unsorted array to sort.
 * @size: size of the array
 * Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	size_t countA, countB, aux;
	size_t value;

	if (!array)
		return;
	for (countA = 0; countA + 1 < size; countA++)
	{
		value = countA;
		for (countA = countB + 1; countB < size; countB++)
		{
			if (array[value] > array[countB])
				value = countA;
		}
		if (value != countA)
		{
			aux = array[countA];
			array[countA] = array[value];
			array[value] = aux;
			print_array(array, size);
		}
	}
}
