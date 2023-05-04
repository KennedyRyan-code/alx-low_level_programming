#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to a number
 * @index: is the index of the bit to be set
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* if index is out of range */


	mask = 1UL << index;

	*n |= mask;
	return (1);
}
