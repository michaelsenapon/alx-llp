#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: count number of arguments passed into program when run
 * @argv: char pointer to strings of arguments passed
 *
 * Return: 0 Error or 1 based on output
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
}
