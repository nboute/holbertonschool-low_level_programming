#include "variadic_functions.h"

/**
 * sum_them_all - Computes sum of all it's arguments
 * @n: number of arguments
 * Return: Sum of all arguments besides @n
 */
int		sum_them_all(const unsigned int n, ...)
{
	int				nb;
	unsigned int	i;
	va_list			args;

	if (!n)
		return (0);
	va_start(args, n);
	nb = 0;
	for (i = 0; i < n; i++)
		nb += va_arg(args, int);

	va_end(args);
	return (nb);
}
