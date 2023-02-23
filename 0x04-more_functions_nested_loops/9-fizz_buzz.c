#include "main.h"
/**
 * main - Entry point
 * Prints numbers 1-100 for multiples
 * of 3, 5 and both been replaced by Fizz, Bizz n FizzBizz.
 * Return: 0 Always;
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Bizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

