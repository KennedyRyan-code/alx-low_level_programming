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


	if (nmemb == || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
