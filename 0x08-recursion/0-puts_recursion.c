#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: a character type pointer to the string
 *
 * Return void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s++);
	_puts_recursion(s);
}


