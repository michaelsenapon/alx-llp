#include "main.h"

/**
 * _strlen - function that prints the length of strings
 * @s: is a pointer to the string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}
