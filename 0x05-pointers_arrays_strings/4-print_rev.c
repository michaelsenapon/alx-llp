#include "main.h"

/**
 * print_rev - print string in reverse order followed by a new line
 * @s: is the pointer to the string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);
	_putchar('\n');
}
