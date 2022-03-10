#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints integers separated by a string
 * @separator: String to print between numbers
 * @n: Number of integer arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
