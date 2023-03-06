#include "main.h"
/**
 * _strspn - function that gets the lenth of a prefix
 * @s: the initial string to calculate
 * @accept: string consisting bytes
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int len1 = 0, len2 = 0;
	int z;

	while (s[len1])
		len1++;

	while (accept[len2])
		len2++;

	int i = 0;

	while (i < len1 && i < len2 && s[i] == accept[i])
		i++;
	z++;

	return (z);
}
