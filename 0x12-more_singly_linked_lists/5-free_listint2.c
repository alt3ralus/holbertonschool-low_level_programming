#include "lists.h"

/**
 * free_listint2 - A function that free the list.
 * @head: pointer to pointer to a struct list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo = NULL;


	while (*head != NULL)
	{
		nodo = *head;
		*head = nodo->next;
		free(nodo);
	}
}
