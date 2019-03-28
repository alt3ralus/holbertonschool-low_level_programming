#include "lists.h"

/**
 * listint_t - get_nodeint_at_index.
 * @head: pointer to the list.
 * @index: unsignet int. Position in the list to return.
 * Return: listint_t struct - Node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodo;
	listint_t *aux;
	unsigned int num = 0;

	nodo = malloc(sizeof(listint_t));

	if (head == NULL)
		return (head);

	while (head != NULL)
	{
		num++;
		nodo = nodo->next;

		if(num++ == index)
		{
			aux = nodo;
		}
	}
	return (aux);
}
