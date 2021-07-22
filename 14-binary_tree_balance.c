#include <stdlib.h>
#include "binary_trees.h"
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
