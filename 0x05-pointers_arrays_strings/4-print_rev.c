#include "main.h"
/**
 * print_rev - prints in reverse.
 * @s: the string
 *
 * Returns: 0
 */

void print_rev(char *s)
{
	int i;
	int n;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
