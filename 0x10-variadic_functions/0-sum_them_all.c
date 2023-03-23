#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum
 * of all its parameter.
 * @n: argument count
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);

}
