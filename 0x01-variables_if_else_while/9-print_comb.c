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
		if (a < '9')
			putchar(',');
			putchar(' ');
	}

	return (0);
}
