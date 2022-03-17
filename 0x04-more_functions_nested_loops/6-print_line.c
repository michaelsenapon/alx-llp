#include "main.h"

/**
 * print_line - Function prints lines based on input number
 * @n: represent the number of lines to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

