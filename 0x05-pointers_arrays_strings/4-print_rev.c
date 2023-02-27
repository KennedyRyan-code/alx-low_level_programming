#include "main.h"
/**
 * print_rev - prints in reverse.
 * @str: the string
 *
 * Returns: 0
 */

void print_rev(char *str)
{
	int i;
	int n;

	i = 0;

	while (str[i] != '\0')
		i++;

	for (n = i - 1; n >= 0; n--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
