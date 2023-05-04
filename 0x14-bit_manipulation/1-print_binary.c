#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* Recursive call to print higher-order */

	_putchar((n & 1) ? '1' : '0'); /* Print lowest-order bit */

}
