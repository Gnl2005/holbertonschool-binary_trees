#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to root node of the tree to count the number of leaves
 *
 * Return: number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t yarpaq;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	yarpaq = binary_tree_leaves(tree->left);
	yarpaq += binary_tree_leaves(tree->right);
	return (yarpaq);
}
