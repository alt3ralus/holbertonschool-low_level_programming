#include "binary_trees.h"
/**
 *binary_tree_node - creates a binary tree
 *@parent: Pointer to the parent node
 *@value: Int value
 *Return: Pointer to a new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *figlio;

	figlio = malloc(sizeof(binary_tree_t));

	if (figlio == NULL)
		return (NULL);

	figlio->n = value;
	figlio->parent = parent;
	figlio->left = NULL;
	figlio->right = NULL;

	return (figlio);
}
