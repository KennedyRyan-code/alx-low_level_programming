#include "main.h"
/**
 * int factorial - function that returns the factorial
 * @n: the given number
 *
 * Return: 0
 */

int factorial(int n)
{
	int z;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	z = n * factorial(n - 1);
	return (z);

}
