#include "main.h"
/**
 * flip_bits - returns the no. of bit would need to flip to get
 * from one number to another.
 * @n: the number
 * @m: the bit
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long m)
{
	unsigned long int xor_result = n ^ m;
	size_t count = 0;

	while (xor_result != 0)
	{
		if (xor_result & 1)
			count++;

		xor_result >>= 1;
	}
	return (count);
}
