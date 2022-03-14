/*
 * Task: Program assign random numbers to var n 
 *	 with additional description
 * Auth: Michael BOJERENU
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- positive, negative or zero
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	int n;
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here*/
	last_dig = n % 10;

	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	}
	else if (last_dig < 6 && last_dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}

	return (0);
}
