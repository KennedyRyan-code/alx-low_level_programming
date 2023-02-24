#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143;
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i, largest = 0;


	for (i = 2; n % 2 == 0; n /= 2)
	{
		largest = 2;
	}

    /* check for odd factors */
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}


	if (n > 2)
	{
		largest = n;
	}

	printf("%lu\n", largest);
	return (0);
}

