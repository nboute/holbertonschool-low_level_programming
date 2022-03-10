#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a given string
 * @separator: String to print between arguments
 * @n: Number of string arguments
 */
void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i;
	char			*str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator)
			printf("%s", separator);
		str = va_arg(args, char *);
		printf("%s", str ? str : "(nil)");
	}
	printf("\n");
}
