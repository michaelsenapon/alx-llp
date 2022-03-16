#include <stdio.h>

int main(void)
{
	int h1, h2, m1, m2;
	for (h1 = 0; h1 <= 2; h1++)
	{
		
		for (h2 = 0; h2 <=3; h2++)
		{

			for (m1 = 0; m1 <=5; m1++)
			{

				for (m2 = 0; m2 <=9; m2++)
				{
					printf("%d", h1);
					printf("%d", h2);
					printf(":");
					printf("%d", m1);
					printf("%d", m2);
					printf("\n");
				}
			}
		}
	}
}
