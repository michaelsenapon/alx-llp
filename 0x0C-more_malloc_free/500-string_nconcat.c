#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: is the destination char variable
 * @s2: is the variable to be added
 * @n: is the number of bytes of string to be added from s2
 *
 * Return: NULL or char as the case may be
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; j < n && s2[j] != '\0'; j++)
		;
	
	k = (i + j + 1);

	s = malloc(sizeof(*s) * k);
	
	i = 0;
	if (s == NULL)
		return (NULL);
	else
		while (s1[i])
			s[i] = s1[i];
		


		s1[s1_len] = s2[s2_len];
		s1_len++;
	}
	s1[s1_len] = '\0';

	return (s);
}
