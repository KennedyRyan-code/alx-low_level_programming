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

	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '\0';

	return (result);
}
