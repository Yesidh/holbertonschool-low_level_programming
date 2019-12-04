#include "binary_trees.h"
/**
 * binary_tree_balance_left - function that measures
 * the left height of a subtree
 *
 * @tree_left: is a pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL, 0
 */

int binary_tree_balance_left(const binary_tree_t *tree_left)
{
	int yesid = 0;

	if (!tree_left->left)
		return (0);
	while (tree_left->left)
	{
		yesid += 1;
		tree_left = tree_left->left;
	}
	return (yesid);
}
/**
 * binary_tree_balance_right - function that measures
 * the right height of a subtree
 *
 * @tree_right: is a pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL, 0
 */
int binary_tree_balance_right(const binary_tree_t *tree_right)
{
	int nicolas = 0;

	if (!tree_right->right)
		return (0);
	while (tree_right->right)
	{
		nicolas += 1;
		tree_right = tree_right->right;
	}
	return (nicolas);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int yesid = 0, nicolas = 0;

	if (!tree)
		return (0);
	yesid = binary_tree_balance_left(tree);
	nicolas = binary_tree_balance_right(tree);
	return (yesid - nicolas);
}
