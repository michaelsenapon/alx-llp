#include "main.h"

/**
 * print_diagonal - print diagonal line on the terminal
 * @n: specify the number of character to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}

}


