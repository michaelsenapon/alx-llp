/**
 * Task 0: Prints _putchar, followed by a new line.
 *
 * Author: Michael BOJERENU
 */

/* Header files declaired */

#include <unistd.h>

/* Function declaration*/

int _putchar(char c);

/**
 * Main: Prints _putchar, followed by new line
 *
 * Return: Always 0.
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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
