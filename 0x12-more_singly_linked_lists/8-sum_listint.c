#include "lists.h"
/**
 * sum_listint - Sum of all data items of the list.
 * @head: Pointer to the list.
 * Return: int.
 */

int sum_listint(listint_t *head)
{
	int count = 0;

	listint_t *nodo;


	nodo = head;

	while (nodo != NULL)
	{
		count = count + nodo->n;
		nodo = nodo->next;
	}
	return (count);
}
