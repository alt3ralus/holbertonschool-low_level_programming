#include "lists.h"

/**
 * print_list  - check the code for Holberton School students.
 * @h: pointer to char.
 * Return: Len of the list.
 */
size_t print_list(const list_t *h)
{

	int count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] %p\n", h->str);
		}
		h = h->next;
	}

	return (count);
}
