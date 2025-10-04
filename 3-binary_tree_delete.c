#include "binary_trees.h"
#include <stdlib.h>
#include <stdlio.h>

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @tree: pointer
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
