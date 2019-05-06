#include "lists.h"
/**
 * print_dlistint - A function that prints double linked list
 * @h: a pointer to the double list struct.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t lista = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		lista++, h = h->next;
	}

	return (lista);
}
