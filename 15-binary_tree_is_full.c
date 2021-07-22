#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_is_full - measures the number of nodes with at least 1 child of a binary tree
* @tree: a pointer to the root node of the tree
* Return: returns the  number of nodes with at least 1 child of a binary tree
*/

size_t binary_tree_is_full(const binary_tree_t *tree)
{
  size_t a, b;

  if (tree == NULL)
    return (0);

  // else
   
  if (binary_tree_balance(tree->left) != 0 || binary_tree_balance(tree->right) != 0)
    return (0);
  else
    return (1);


}