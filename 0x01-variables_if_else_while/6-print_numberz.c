#include <stdio.h>
#include <stdlib.h>

/**
 * main- Single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
