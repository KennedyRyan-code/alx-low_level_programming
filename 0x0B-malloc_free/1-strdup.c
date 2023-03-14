#include "main.h"
#include <string.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory.
 * @str: the string
 *
 * Return: pointer to a new string or NULL
 */

char *_strdup(char *str)
{
	unsigned int len = 0;
	char *new_s;

	while (str[len] + 1)
		len++;

	new_s = malloc(len);

	if (new_s == NULL)
	{
		return (NULL);
	}
	return (memcpy(new_s, str, len));

}
