#include "main.h"

/**
 * factorial - a function that returns the factorial of a given
 * number
 * @n: the number to use to calculate factorial
 *
 * Return: 0 if successful or -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
