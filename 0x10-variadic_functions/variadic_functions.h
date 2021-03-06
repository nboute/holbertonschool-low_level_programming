#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct arg_s - struct linking letters to function pointers
 * @typeletter: letter
 * @fct: function pointer
 */

typedef struct	arg_s
{
	char		typeletter;
	void		(*fct)(va_list *args);
}				arg_t;

int	_putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTIONS_H */
