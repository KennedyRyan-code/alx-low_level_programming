#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
