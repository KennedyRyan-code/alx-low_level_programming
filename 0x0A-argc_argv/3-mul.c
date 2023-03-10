#include <stdio>
#include <stdlib>
/**
 * main - program that multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: pointer to string
 *
 * Retuen: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, mul = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (-1);
	}
	for (i = 2; i < argc; i++)
	{
		arg1 = atoi(argv[i]);
		arg2 = atoi(argv[i]);

		mul = arg1 * arg2;
		printf("%d\n", mul);
	}
	return (0);

}
