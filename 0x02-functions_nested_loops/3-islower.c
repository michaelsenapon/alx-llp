#include "main.h"

/**
 * int _islower - Checks for lowercase character
 * @c: Is a variable representing ascii values for lower
 * case characters
 *
 * Return 0 if failed
 *
 * Return 1 if success otherwise 0
 */
int _islower(int c)
{
	if (c < 97 || c > 123)
		return (0);
	else
		return (1);
}
