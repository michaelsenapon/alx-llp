#include <stdio.h>
#include <stdlib.h>

/**
 * main- Print single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d = 0;

	do{
	printf("%d", d);
	d++;
	} while(d < 10);
	printf("\n");

	return (0);
}
