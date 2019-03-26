#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of a
 * @n: Data
 * @head: pointer to pointer to a struct list.
 * Return: the addres or new node.
 */
void free_listint(listint_t *head)
{
	listint_t *nodo = NULL;

	while (head != NULL)
	{
		nodo = head;
		head = nodo->next;
		free(nodo);
	}
}
