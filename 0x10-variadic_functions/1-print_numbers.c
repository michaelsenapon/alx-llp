#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function that print numbers
 * @separator: comma and space separator
 * @n: number of integers passed to the function
 * @...: elipsis variable
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned int num;

	if (!separator)
		return;

	va_start(arg, n);

	while (i < n)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		i++;

		if (i < n)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
