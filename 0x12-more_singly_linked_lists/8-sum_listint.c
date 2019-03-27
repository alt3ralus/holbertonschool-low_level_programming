#include "lists.h"


int sum_listint(listint_t *head)
{
	int count = 0;

	listint_t *nodo;



	nodo = head;

	while (nodo != NULL)
	{
		count++;
		nodo = nodo->next;
	}
	return (count);
}
