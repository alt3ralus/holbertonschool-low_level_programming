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

	newNode = (dlistint_t*)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = var;
		newNode->prev = NULL;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
}
