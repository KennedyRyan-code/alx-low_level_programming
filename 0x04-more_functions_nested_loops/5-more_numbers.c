#include "main.h"
/**
 * more_numbers - prinits 10 times the numbers, 1-14;
 *
 * Returns: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('1');
			_putchar(j % 10 + '0');
		}
	}
	_putchar('\n');
}

