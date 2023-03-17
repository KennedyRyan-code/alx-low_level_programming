#include "main.h"
/**
 * _pow_recursion - function that returns the value and power.
 * @x: integer
 * @y: integer
 * Return: 0 or -1
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}

