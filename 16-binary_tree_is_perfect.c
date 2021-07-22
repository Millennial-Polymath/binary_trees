#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: the pointer to the node to check
 *
 * Return: 1 if the node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: The height of the tree and NULL when the tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - measures the number
 * of nodes with at least 1 child of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: returns the  number of nodes with at least 1 child of a binary tree
 */

size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - (binary_tree_height(tree->right)));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 is the tree is not perfect and zero if it is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);
	if (!binary_tree_is_leaf(tree))
	{
		if (binary_tree_balance(tree) == 0)
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}
	return (0);
}
