#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars & initializes it.
 * @size: the size of array to be created
 * @c: the character to initialize the array
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
