#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_leaves - measures the number of leaves of a binary tree
* @tree: a pointer to the root node of the tree to find the number of leaves
* Return: returns the number of leaves the tree and 0 if the tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	else
		return (binary_tree_leaves(tree->left) + (binary_tree_leaves(tree->right)));
}
