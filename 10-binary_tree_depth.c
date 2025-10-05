#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - that measures the depth of a node in a binary tree
 * @tree: pointers
 *
 * Return: If tree is NULL, your function must 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;
	if (tree == NULL)
		return (0);

	for (i = 0; tree->parent != NULL; i++)
	{
		tree = tree->parent;
	}
	return (i);
}
