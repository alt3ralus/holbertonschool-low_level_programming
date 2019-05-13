#include "lists.h"
/**
 * add_dnodeint - adds a new node to start of dlinked list
 * @head: double pointer to list
 * @n: an int.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	int var = n;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = var;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (newNode);


}
