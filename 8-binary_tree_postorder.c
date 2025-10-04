#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - a binary tree using post-order traversal
 * @tree: pointers
 * @func: fuction pointers
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
	binary_tree_inorder(tree->left, func);

	if (tree->right != NULL)
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
