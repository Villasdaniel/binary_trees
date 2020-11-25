#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: parent node
 * @value: value
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = binary_tree_node(parent, value);
	if (!bt)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = bt;
		bt->left = parent->left;
	}
	parent->left = bt;
	return (bt);
}
