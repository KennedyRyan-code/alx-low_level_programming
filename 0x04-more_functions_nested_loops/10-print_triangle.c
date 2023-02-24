#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line;
 * @size: is the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
		_putchar('\n');
	else
	{

		for (row = 0; row <= size; row++)
		{
			for (space = size -  row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
