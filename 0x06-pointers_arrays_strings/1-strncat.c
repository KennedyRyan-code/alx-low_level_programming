#include "main.h"
/**
 * _strncat - concatenates two strings, useing at most 'n' bytes from @src.
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, j; /* len = lenght of dest, j is the counter for int n */

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
