#include "lists.h"

/**
 * add_node - Add one note to the list.
 * @head: double pointer to char.
 * @str: pointer to char.
 * Return: Len of str list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodo;

	nodo = malloc(sizeof(list_t));
	nodo->str = strdup(str);

	if (*head == NULL)
	{
		*head = nodo;
	}
	else
	{
		nodo->next = *head;
		*head = nodo;
	}
	return (nodo);
}
