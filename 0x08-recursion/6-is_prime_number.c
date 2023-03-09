#include "main.h"
/**
 * is_prime_number - function checks for prime number.
 * @n: the number
 *
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);

}
