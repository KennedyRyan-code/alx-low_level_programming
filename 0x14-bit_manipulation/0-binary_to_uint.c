#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 *
 * Return: the comverted number or 0
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;
		if (b[i] == '1')
			result |= 1;
	}
	return (result);
}

