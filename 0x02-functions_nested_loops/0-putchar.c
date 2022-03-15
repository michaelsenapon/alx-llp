#include <unistd.h>
#include "main.h"

/**
 * Task 0: Program that prints _putchar using 
 * _putchar function created locally.
 */

/*
 * Function:  declaration
 * @c - represent character
 */
int _putchar(char c);

/**
 * Main: Prints _putchar, followed by new line
 *
 * Return: On Success 1.
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (1);
}
