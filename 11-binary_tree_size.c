#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	i = binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);
	return (i + 1);
}
