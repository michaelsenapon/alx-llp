#include <stdio.h>
#include <stdlib.h>

/**
 * main- Combination of Single-Digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
