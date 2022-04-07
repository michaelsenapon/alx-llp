#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each elements in the array
 *
 * Return: NULL or pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
		s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < nmemb; i++)
			s[i] = '0';
		return (s);
	}
}
