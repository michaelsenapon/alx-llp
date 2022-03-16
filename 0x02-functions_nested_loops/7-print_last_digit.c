#include "main.h"

/**
 * print_last_digit: - Print absolute value of an integer
 * @int: Represent integers
 *
 * Return: Always 0
 */
int print_last_digit(int a)
{	
	int a;
	if (a < 0)
	{
		int result;
		result = (a * (-1));
		return (result);
	}
	else
	{
		return (a);
	}
}
