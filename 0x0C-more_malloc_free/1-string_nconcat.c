#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: a pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int x;
	unsigned int y;
	char *result;

	if (s1 == NULL)
		s1 = ""; /*treat Null as an empty string*/

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
	{
		n = s2_len++;
	}
	result = malloc(s1_len + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < s1_len; x++)
	{
		result[x] = s1[x];
	}

	for (y = 0; y < s2; y++)
	{
		result[s1_len + y] = s2[y];
		result[s1_len + n] = '\0';
	}
	return (result);

}

