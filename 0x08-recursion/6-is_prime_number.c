#include "main.h"
/**
 * check - a helping function to check for prime numbers
 * @a: int
 * @b: int
 * Return: 1 or 0
 */

int check(int a, int b)
{

	if (b == 1)
	{
		return (1); /*Base case:*/
	}
	if (a % b == 0)
	{
		return (0);
	}

	return (check(a, b - 1));
}

/**
 * is_prime_number - function checks for prime number.
 * @n: the number
 *
 * Return: integer
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	return (check(n, n - 1));

}
