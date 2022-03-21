#include "main.h"

/**
 * print_rev - print string in reverse order followed by a new line
 * @s: is the pointer to the string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');

}
