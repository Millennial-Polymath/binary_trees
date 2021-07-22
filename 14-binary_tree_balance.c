#include <stdlib.h>
#include "binary_trees.h"

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
