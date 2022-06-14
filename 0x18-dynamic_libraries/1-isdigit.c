#include "main.h"

/**
 * _isdigit - checks for digits 0 - 9
 * @c: represent the digit
 *
 * Return: success value is 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
