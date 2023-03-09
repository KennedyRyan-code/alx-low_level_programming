#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root.
 * @n: the number
 *
 * Return: 0 or -1
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	root = _sqrt_recursion(n - 1) + 1;

	if (root * root > n)
	{
		root--;
	}
	return (root);

}


