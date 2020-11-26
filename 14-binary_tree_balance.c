#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: node
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		left = binary_tree_balance(tree->left);
		left += 1;
	}
	if (tree->right)
	{
		right = binary_tree_balance(tree->right);
		right += 1;
	}
	return (left - right);
}
