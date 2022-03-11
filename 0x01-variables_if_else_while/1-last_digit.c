/*Here are my headers*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*The main function of this code is to print out numbers
 * at random 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here*/

	return (0);
}
