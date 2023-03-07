#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints sum of two diagonals
 * @a: a pointer to the first element
 * @size: an integer that specifies the size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /*Add top-left to bottom-right*/

		sum2 += *(a + i * size + (size - i - 1));
		/*Add top-right to bottom-left*/
	}
	printf("%d, %d\n", sum1, sum2);
}
