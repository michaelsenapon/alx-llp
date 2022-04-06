#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that prints minimum number of coins to make change for an 
 * amount of money.
 * @argc: count of arguments passed when running the program
 * @argv: a pointer to the array of strings passed when running the program
 *
 * Return: integer value, 1, 0 or Error accordingly
 */
int main(int argc, char *argv[])
{
	int divisors, cents;
	int count = 0;
	char *c;

	if (argc == 2)
	{
		c = argv[1];
		cents = atoi(c);

		if (cents < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (cents >= 25)
		{
			count += (cents / 25);
			cents%= 25;
		}
		if (cents >= 10)
		{
			count+= (cents / 10);
			cents%= 10;
		}
		if (cents >= 5)
		{
			count+= (cents / 5);
			cents%= 5;
		}
		if (cents >= 2)
		{
			count+= (cents / 2);
			cents%= 2;
		}
		if (cents >= 0)
		{
			count+= cents;
			printf("%d\n", count);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
