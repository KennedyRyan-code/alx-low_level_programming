#include <stdio.h>
/**
 * KennedyR-code
 * main - print the alphabet in lowercase
 * Return: 0 Always (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
