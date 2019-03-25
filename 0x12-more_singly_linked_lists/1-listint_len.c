#include "lists.h"
/**
 * listint_len - A function that returns the number of elements in a linked
 * @h: constant h pointer.
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
