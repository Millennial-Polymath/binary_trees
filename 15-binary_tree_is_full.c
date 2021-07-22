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
* binary_tree_is_full - measures the number
* of nodes with at least 1 child of a binary tree
* @tree: a pointer to the root node of the tree
* Return: returns the  number of nodes with at least 1 child of a binary tree
*/

size_t binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	if (!binary_tree_is_leaf(tree))
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
