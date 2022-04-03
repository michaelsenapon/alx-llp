#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Is a variable representing ascii values for lower
 *
 * Return: Success 1 or 0 if otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 123)
		return (0);
	else
		return (1);
}
