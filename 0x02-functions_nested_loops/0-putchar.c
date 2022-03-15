#include <unistd.h>
#include "main.h"

/**
 * int _putchar - Its a new function declared to print on stdout
 * @char c: Parameter that holds the value of character
 *
 * Description: This declaration is to enable 
 * printing of character without using printf
 */
int _putchar(char c);

/**
 * Main: Prints _putchar, followed by new line
 *
 * Return: On Success 0.
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
	return (0);
}
