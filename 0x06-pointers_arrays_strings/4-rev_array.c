#include "main.h"
/**
 * reverse_array - function to reverses the content.
 * @a: the array to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, rev;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j) = *(a + (j - 1));

		}
	}
}
