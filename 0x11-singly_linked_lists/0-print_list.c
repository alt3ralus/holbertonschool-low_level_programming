#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
