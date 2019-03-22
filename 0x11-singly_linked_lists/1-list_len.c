#include "lists.h"

/**
 * list_len  - check the code for Holberton School students.
 * @h: pointer to char.
 * Return: Len of the list.
 */
size_t list_len(const list_t *h)
{

	int count;

	for (count = 0; h != NULL; count++)

		h = h->next;


	return (count);
}
