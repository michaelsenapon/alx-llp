#include "main.h"
#include "stdio.h"

/**
 * main - program that prints the number of arguments passed into it
 * @argc: parameter that counts the number of arguments passed
 * @argv: a char pointer to strings of arguments passed
 *
 * Return: 0 always success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
