#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: integer values
 * @max: integer values
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	unsigned int i;
	unsigned int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);

}
