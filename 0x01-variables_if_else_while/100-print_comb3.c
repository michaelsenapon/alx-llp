#include <stdio.h>
#include <stdlib.h>

/**
 * main- Combination of Single-Digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; a++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != '8' || (i == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}	
			}
		}
	}
	putchar('\n');

	return (0);
}
