#include "main.h"

/**
 * _print_rev_recursion - a function that print a string in reverse
 * @s: a char pointer to the address of string
 *
 * Return void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;

	_print_rev_recursion(s);

	s--;

	_putchar(*s);
}
