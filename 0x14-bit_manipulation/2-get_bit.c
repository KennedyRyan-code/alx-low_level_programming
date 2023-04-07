#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to be converted to bit
 * @index: the index starting from 0 of the bit
 *
 * Return: the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1); /* extract bit at index & return */

}
