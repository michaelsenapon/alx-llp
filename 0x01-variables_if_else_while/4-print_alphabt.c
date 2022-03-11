#include <stdio.h>
#include <stdlib.h>

/**
 * main- lowercase alphabet without q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
			continue;
		if (alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
