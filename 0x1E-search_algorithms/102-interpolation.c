#include "search_algos.h"
/**
 * interpolation_search - Search for a value in a sorted array
 * using Interpolation search.
 * @array: A pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index, or -1 if not found or if 'array' is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		} else if (array[pos] < value)
		{
			low = pos + 1;
		} else
		{
			high = pos - 1;
		}
	}

	printf("Value checked array[%d] is out of range\n", low);
	return (-1);
}
