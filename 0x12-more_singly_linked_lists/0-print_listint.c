#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Print
 * @h: constant struct type
 * Return: size of struct
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
