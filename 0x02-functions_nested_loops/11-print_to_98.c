#include <stdio.h>

/**
 * print_to_98 - Print numbers from n to 98
 * @n: n represent the beginning of prints
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <=98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
			return;
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
			return;
		}
	}
}
