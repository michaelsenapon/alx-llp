#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: count number of arguments passed into the program
 * @argv: is a char pointer to strings of arguments passed
 *
 * Return: 0 or 1 accordinly
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)

	if (argc <= 1)
	{
		printf("0\n");
	}
	else if (*argv[i] < 48 || *argv[i] > 57)
	{
		printf("Error\n");
	}
	else
	{
		sum += *argv[i];
	}
		printf("%d\n", sum);
		return (0);
}
