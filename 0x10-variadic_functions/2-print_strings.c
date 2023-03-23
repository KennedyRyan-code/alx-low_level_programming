#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: a string separator
 * @n: number of input
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");

}
