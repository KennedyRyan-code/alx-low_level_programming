#include <stdio>
#include <stdlib>
/**
 * main - program that multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: pointer to string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, mul = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	mul = arg1 * arg2;

	printf("%d\n", mul);

	return (0);

}
