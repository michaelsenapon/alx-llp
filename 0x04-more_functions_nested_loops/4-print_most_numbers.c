#include "main.h"

/**
 * print_most_numbers - Function print 0 - 9 without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2) || (n == 4))
		{
			continue;
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
