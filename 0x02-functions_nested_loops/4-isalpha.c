#include "main.h"

/**
 * _isalpha - Checks for alphabets
 * @c: Is a variable representing ascii values for alphabets
 *
 * Return 1 for success
 * Return 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
