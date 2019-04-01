#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the beginning of a
 * @head: pointer to pointer to a struct list.
 * @str: string.
 * Return: the addres or new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodo;
	list_t *temp;
	int count = 0;

	nodo = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));

	if (nodo == NULL)
		return (NULL);

	nodo->str = strdup(str);

	if (*head == NULL)
	{
		*head = nodo;
		nodo->next = NULL;
	}

	temp = *head;

	while (str[count] != '\0')
	{
		count++;
	}
	nodo->len = count;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nodo;
	nodo->next = NULL;

	return (nodo);
}
