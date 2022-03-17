#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	
	while (i < 10)
	{
		i++;
		printf("%d\n", i);
		printf("  %d\n", i / 2);
	}
}
