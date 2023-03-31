#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts node as left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL if parent is NULL or on failure.
 * If parent already has a left-child, new node replaces old while old becomes
 * new node's left-child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
