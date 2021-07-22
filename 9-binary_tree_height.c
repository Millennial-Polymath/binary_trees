#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: The height of the tree and NULL when the tree is NULL
 */
 
size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t left, right, height;

  if (tree == NULL)
    return (0);
	else
  {
  	left = binary_tree_height(tree->left);
  	right = binary_tree_height(tree->right);

    if (left >= right)
      return (left + 1);

    else
      return (right + 1);
  }
}


// size_t binary_tree_height(const binary_tree_t *tree)
// {
// 	size_t depth_left, depth_right, height;

// 	if (tree == NULL)
// 		return (0);

// 	depth_left = binary_tree_height(tree->left);

// 	depth_right = binary_tree_height(tree->right);

// 	height = ((depth_left > depth_right) ? depth_left : depth_right) + 1;

// 	return (height);
// }
