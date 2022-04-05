#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size
 * @c: is the char
 *
 * Return: Null or Success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	m = malloc(sizeof(char) * (size + 1));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		m[i] = c;
		i++;
	}
	m[i] = '\0';
	free(m);
	return (m);
}
