#include "lists.h"
/**
 * add_dnodeint - adds a new node to start of dlinked list
 * @head: double pointer to list
 * @n: an int.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	if (newNode->next != NULL)
		newNode->next->prev = newNode;

	return (newNode);
}
