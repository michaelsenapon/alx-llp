#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: count number of arguments passed into program when run
 * @argv: char pointer to strings of arguments passed
 *
 * Return: 0 Error or 1 based on output
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (argv[1] * argv[2]));
	return (0);
	
