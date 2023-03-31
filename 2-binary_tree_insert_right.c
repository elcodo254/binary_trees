#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL if parent is NULL or on failure.
 * If parent already has a right-child, new node replaces old while old becomes
 * new node's right-child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
