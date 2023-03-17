#include "main.h"
/**
 * _calloc - function that allocate memory for an array.
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: a pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	char *memset;

	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset = ptr;

	for (i = 0; i < (nmemb * size); i++)
		memset[i] = '\0';

	return (ptr);
}
