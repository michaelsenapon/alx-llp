#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;
	char *pp;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my coputer: %lu bytes\n", sizeof(float));
	printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
	printf("Size of pointer: %lu bytes\n", sizeof(p));
	printf("Size of pointers: %lu bytes\n", sizeof(pp));
	return (0);
}
