#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers.
 * @separator: string
 * @n: argument count/ numbers of intergers passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(nums);

	printf("\n");

}


