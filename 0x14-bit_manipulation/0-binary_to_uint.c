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


	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '\0' && *b != '1')
			return (0);

		result = (result << 1) + (*b++ - '0');
	}
	return (result);

}

