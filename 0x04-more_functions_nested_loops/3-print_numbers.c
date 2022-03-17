#include "main.h"

/**
 * print_numbers - Function print numbers from 0 - 9 and new line
 * 
 * Return: void
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
