#include "main.h"

/**
 * more_numbers - Function print no 0 - 14 ten times and new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int i;

		for (i = 0; i < 15 i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
