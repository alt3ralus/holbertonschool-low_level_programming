#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the beginning of a
 * @n: Data
 * @head: pointer to pointer to a struct list.
 * Return: the addres or new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodo;
	listint_t *temp;

	nodo = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));

	if (nodo == NULL)
		return (NULL);

	nodo->n = n;

	if (*head == NULL)
	{
		*head = nodo;
		nodo->next = NULL;
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nodo;
	nodo->next = NULL;

	return (temp);
}
