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
	int s1_len, s2_len, s;

	for (s1_len = 0; s1_len != '\0'; s1_len++)
		;

	for (s2_len = 0; s2_len < n && s2[s2_len] != '\0'; s2_len++)
	{
		s1[s1_len] = s2[s2_len];
		s1_len++;
	}
	s1[s1_len] = '\0';
	s = malloc(sizeof(*s1) * s1_len);
	return (s1);
}
