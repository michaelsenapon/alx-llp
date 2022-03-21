#include "main.h"

/**
 * print_rev - print string in reverse order followed by a new line
 * @s: is the pointer to the string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}




