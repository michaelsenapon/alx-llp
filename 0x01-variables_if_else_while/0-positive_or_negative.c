#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*more headers have been added */
/**
 * This source code print numbers in random
 * Positive, negative or zero
 * Also specify according to the random number predicted
 */

/*This is my main code*/
int main(void)	/*This is main program*/
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);

	return (0);	/*Here is the end of program*/
}
