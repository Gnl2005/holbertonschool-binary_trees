#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - the right-child
 * @parent: a pointer to the node to insert the right-child in
 * @value: the new node
 *
 * Return: Always 0
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *yeni;

	if (parent == NULL)
		return (NULL);

	yeni = malloc(sizeof(binary_tree_t));
	if (yeni == NULL)
		return (NULL);

	yeni->n = value;
	yeni->parent = parent;
	yeni->left = NULL;
	yeni->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = yeni;
	parent->right = yeni;
	return (yeni);
}
