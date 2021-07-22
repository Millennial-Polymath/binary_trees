#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: returns the size of the tree and 0 if the tree is NULL
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + (binary_tree_size(tree->right)));
}

/**
 * binary_tree_leaves - measures the number of leaves of a binary tree
 * @tree: a pointer to the root node of the tree to find the number of leaves
 * Return: returns the number of leaves the tree and 0 if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + (binary_tree_leaves(tree->right)));
}

/**
 * binary_tree_nodes - measures the number of nodes with
 * at least 1 child of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: returns the  number of nodes with at least 1 child of a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) - (binary_tree_leaves(tree)));
}
