#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right- inserts a node as the right child of another node
 * @parent: the pointer to the node to insert the right child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure if parent is NULL
 */

// binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
// {
//   if (parent == NULL)
//     return (NULL);
//   binary_tree_t *new_node = binary_tree_node(parent, value);

//   if (parent->right)
//   {
//     new_node->right = parent->right;
//     parent->right->parent = new_node;
//   }
//   parent->right = new_node;

//   return (new_node);
// }


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);

	new_right_node = binary_tree_node(parent, value);

	new_right_node->right = parent->right;
	if (new_right_node->right != NULL)
		new_right_node->right->parent = new_right_node;

	parent->right = new_right_node;
	return (new_right_node);
}