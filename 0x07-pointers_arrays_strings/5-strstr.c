#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;
	char *start = NULL;

	while (*p1 = != '\0')
	{
		if (*p1 == *p2)
		{
			if (start == NULL)
			{
				start = p1;
			}
			p2++;

			if (*p2 == '\0')
			{
				return (start);
			}
		}
		else
		{
			p2 = needle;
			start = NULL;
		}
		p1++;
	}
	return (NULL);

}
