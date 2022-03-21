#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: is a pointer to the string to be printed out
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
