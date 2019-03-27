#include "lists.h"
/**
 * pop_listint - Remove the head node.
 * @head: double pointer to list.
 * Return: Data from removed node.
 */

int pop_listint(listint_t **head)
{

	int data;

	listint_t *nodo;


	if (*head == NULL)
	{
		return (0);
	}

	nodo = *head;

	*head = nodo->next;

	data = nodo->n;

	free(nodo);
	return (data);

}
