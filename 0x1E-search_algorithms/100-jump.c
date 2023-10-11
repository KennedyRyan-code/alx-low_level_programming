#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Search for a value in a sorted array using Jump search.
 * @array: A pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index, or -1 if not found or if 'array' is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = (int)sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	printf("Value checked array[0] = [%d]\n", array[0]);

	while (array[prev] < value && prev < size)
	{
		prev = step;
		step += (int)sqrt(size);

		if (prev < size)
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);

	for (i = prev - step; i <= prev && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
