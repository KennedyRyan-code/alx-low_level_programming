#include "main.h"
/**
 * check_pal - if string is a palindrome
 * @s: string
 * @left: int
 * @right: right
 *
 * Return: int
 */

int check_pal(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}

	return (check_pal(s, left + 1, right - 1));

}

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')

		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - function that checks string
 * @s: pointer to string
 *
 * Return: int
 */

int is_palindrome(char *s)
{

	return (check_pal(s, 0, _strlen_recursion(s) - 1));

}
