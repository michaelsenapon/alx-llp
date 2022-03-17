#include "main.h"

/**
 * _isupper - funtion that checks for uppercase character
 * @c: represent character
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c);
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
