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
	va_list list;
	unsigned int i;
	unsigned int num;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
