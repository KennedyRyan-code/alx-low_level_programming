#include "main.h"
/**
 * clear_bit - sets the the value of a bit to 0 at  a given index
 * @n: pointer to the given number
 *@index: the index of the bit to be set
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);

}
