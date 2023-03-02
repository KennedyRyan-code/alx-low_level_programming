#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
			*(s + count) -= 'a' - 'A';
		count++;
	}
	return (s);
}
