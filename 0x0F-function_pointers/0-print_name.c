#include "function_pointer.h"

/**
 * print_name - function that prints a name.
 * @name: the name
 * @f: function pointer
 * @char: parameter
 *
 * Return: nothing
 */

void print_na,e(char *name, void (*f)(char *))
{
	f(name);
}
