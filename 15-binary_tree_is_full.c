#include <stdlib.h>
#include "binary_trees.h"
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

	if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
	    return (1);
	else
		return (0);
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);


}