#include "search_algos.h"
/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index, or -1 if not found or if 'array' is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d", array[i]);
			} else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
