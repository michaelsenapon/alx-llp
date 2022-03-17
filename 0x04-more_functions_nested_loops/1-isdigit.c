#include "main.h"

/**
 * is_digit - This function checks for a digit (0 through 9)
 * @c: represent the digit
 *
 * Return: return value is 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
