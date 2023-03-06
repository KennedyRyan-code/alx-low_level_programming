#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the pointer
 * @n: number of bytes pointed to by s
 * @b: the constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = (char *)s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = (char)b;
	}

	return (s);

}
