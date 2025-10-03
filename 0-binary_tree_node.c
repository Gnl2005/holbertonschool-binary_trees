#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: Always 0
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *yeni;

	yeni = malloc(sizeof(binary_tree_t));
	if (yeni == NULL)
		return (NULL);

	yeni->n = value;
	yeni->parent = parent;
	yeni->left = NULL;
	yeni->right = NULL;

	return (yeni);
}

/**
 * main - Enter point
 *
 * Return: Always 0
 */
int main(void)
{
	binary_tree_t *qutu = binary_tree_node(NULL, 1);

	qutu->left = binary_tree_node(qutu, 2);
	qutu->right = binary_tree_node(qutu, 3);

	printf("Qutu: %d\n", qutu->n);
	printf("Left: %d\n", qutu->left->n);
	printf("Right: %d\n", qutu->right->n);
	return (0);
}
