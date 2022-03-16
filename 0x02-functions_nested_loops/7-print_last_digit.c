#include "main.h"

/**
 * print_last_digit: - Print absolute value of an intege
 * @c: Represent integers
 *
 * Return: Always 0
 */
int print_last_digit(int c)
{	
	int last_digit = (c % 10);
	
	if (last_digit >= 0)
	{
		return (last_digit);
	}
	else
	{
		last_digit = (last_digit * (-1));
		return (last_digit);
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
