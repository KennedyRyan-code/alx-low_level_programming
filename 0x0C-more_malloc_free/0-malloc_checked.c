#include "main.h"
#include <unistd.h>
/**
 * malloc_checked - function that allocates memory.
 * @b: size of the memory
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);

}
