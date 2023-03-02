#include "main.h"
/**
 * reverse_array - function to reverses the content.
 * @a: the array to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = rev;
	}
}
