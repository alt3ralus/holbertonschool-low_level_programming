#include "lists.h"
/**
 * dlistint_len - A function that returns the number of elements in a linked.
 * @h: A pointer to the double linked list.
 * Return: Th number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lista = 0;

	while (h != NULL)
		lista++, h = h->next;

	return (lista);
}
