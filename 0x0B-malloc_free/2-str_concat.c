#include "main.h"
#include <string.h>
/**
 * str_concat - function that concatenatea two strings
 * @s1: the string
 * @s2: the string
 *
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int x;
	char *result;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (x = 0; x < len2; x++)
	{
		result[len1 + x] = s2[x];
	}
	return (result);
}
