#include "main.h"

/** 
 *int _islower - Checks for lowercase character
 * 
 * Return 1 if success otherwise 0
 */
int _islower(int c)
{
	char r;

	if (c < 97 || c > 123)
		return 0;
	else
		return 1;
}	
