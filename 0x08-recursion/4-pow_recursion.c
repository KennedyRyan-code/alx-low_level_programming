#include "main.h"
/**
 * _pow_recursion - function that returns the value and power.
 * @x: integer
 * @y: integer
 * Return: 0 or -1
 */

int _pow_recursion(int x, int y)
{
	int z;

	z = x * _pow_recursion(x, y - 1);

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (z);

}

