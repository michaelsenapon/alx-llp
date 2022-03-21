#include <stdio.h>

/**
 * modify_my_char_var - set the char and variable to 'o' and 'l'
 * @cc: is the variable that points to char to be modified
 * @ccc: is the variable 
 *
 * Return: Always 0.
 */
void modif_my_char_var(char *cc, char ccc)
{
	printf("Value of 'cc': %p\n", cc);
	printf("Address of 'cc': %p\n", &cc);
	printf("Value of 'ccc': %d (%c)\n", ccc, ccc);
	printf("Address of 'ccc': %p\n", &ccc);

	*cc = 'o';
	ccc = 'l';
}

/**
 * main - how to change the value of a variable from outside the function 
 * it is declared in, using a pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	char ooo;
	char *q;

	p = &c;
	c = 'H';
	q = &ooo;


	modif_my_char_var(p, *q);

	printf("value of 'c' before the call: %d (%c)\n", c, c);
	printf("Address of 'c' %p\n", &c);
}

