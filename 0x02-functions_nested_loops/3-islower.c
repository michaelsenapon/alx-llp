#include "main.h"

/**
 * int _islower - Checks for lowercase character
 * @c: Is a variable representing ascii values for lower
 *
 * Return 1 for lowercase character
 * Return 0 if failed
 */
int _islower(int c)
{
	if (c < 97 || c > 123)
		return (0);
	else
		return (1);
}
