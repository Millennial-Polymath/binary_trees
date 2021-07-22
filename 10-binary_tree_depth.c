#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_depth - function that measures the depth of a node in a   binary tree
* @tree: is a pointer to the node to measure the depth
* Return: return the depth of a node, and 0 when the tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}