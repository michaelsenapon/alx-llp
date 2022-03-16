#include "main.h"

/**
 * _abs - Print absolute value of an integer
 * @int: Represent integers
 *
 * Return: Success (0)
 */
int _abs(int a)
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
