#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument that stores the number of arguments passed
 * @argv: is pointer to the strings of arguments passed into program
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
