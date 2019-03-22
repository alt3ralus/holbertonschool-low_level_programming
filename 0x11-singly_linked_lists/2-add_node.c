#include "lists.h"

/**
 * add_node - Add one note to the list.
 * @head: double pointer to char.
 * @str: pointer to char.
 * Return: Len of str list.
 */
list_t *add_node(list_t **head, const char *str);
{
	int i;
	list_t *nodo;

	nodo = malloc(sizeof(list_t));
	nodo->str = strdup(str);

	for (i = 0; srt[i] != '\0'; i++)
	{}

	nodo->len = i;

	if (nodo == NULL)
	{

	}








}
