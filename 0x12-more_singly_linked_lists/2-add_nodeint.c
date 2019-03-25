#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of a
 * @n: Data
 * @head: pointer to pointer to a struct list.
 * Return: the addres or new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{


	listint_t *nodo;

	nodo = malloc(sizeof(listint_t));
	nodo->n = n;

	if (*head == NULL)
	{
		*head = nodo;
	}
	else
	{
		nodo->next = *head;
		*head = nodo;
	}
	return (*head);

}
