#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: is the pointer to the first integer to be reset
 * @b: is the pointer to the second integer to be reset
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
