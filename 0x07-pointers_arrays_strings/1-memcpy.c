#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: number of bytes to be copied
 * @src: source of memory to be copied
 * @dest: destionation of memory copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
