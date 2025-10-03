#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *yeni;

	if (parent == NULL)
		return (0);
	yeni = malloc(sizeof(binary_tree_t));
	if (yeni == NULL)
		return (NULL);

	yeni->n = value;
	yeni->parent = parent;
	yeni->right = NULL;
	node->left = parent->left

		if (parent->left != NULL)
			parent->left->parent = node;
	parent->left = yeni;
	return (yeni);
}
