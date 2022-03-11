#include <stdio.h>
#include <stdlib.h>

/**
 *main- Print Hexadecimal Numbers
 *
 *Return: Always 0 (success)
 **/
int main(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}

