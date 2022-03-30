#include "main.h"

/**
 * _strlen_recursion - a function that return lenght of a string.
 * @s: a char pointer to the address of a string
 *
 * Return: 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
