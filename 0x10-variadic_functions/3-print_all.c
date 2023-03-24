#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print anything.
 * @format: a list of types of arguments passed.
 *
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{	val_list args;

	char c;
	unsigned int i, arg_count = 0, check_printed = 0; /* check & count arg*/
	double f;
	char *s;
	const char *p = format;

	va_start(args, format);

	while (*p)
	{
		switch (*p++)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				check_printed = 1;
				break;
			case 'i':
				i = va_arg(agrs, int);
				printf("%d", i);
				check_printed = 1;
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				check_printed = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
				{
					printf("%s", s);
					check_printed = 1;
				}
				else
				{
					printf("(nil)");
				}
				break;
			default:
				break;
		}
		arg_count++;

		if (*p && (arg_count < 2 || check_printed))
		{
			printf(", ");
			check_printed = 0;
		}
	}
	va_end(args);
	printf("\n");
}
