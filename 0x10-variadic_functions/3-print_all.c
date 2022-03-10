#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Get next char argument and prints it
 * @args: Arguments list
 */
void	print_char(va_list *args)
{
	printf("%c", (char)va_arg(*args, int));
}

/**
 * print_int - Get next int argument and prints it
 * @args: Arguments list
 */
void	print_int(va_list *args)
{
	printf("%i", va_arg(*args, int));
}

/**
 * print_float - Get next float argument and prints it
 * @args: Arguments list
 */
void	print_float(va_list *args)
{
	printf("%f", (float)va_arg(*args, double));
}

/**
 * print_string - Get next string argument and prints it
 * @args: Arguments list
 */
void	print_string(va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints all given arguments following a format string
 * @format: String listing arguments and their types
 */
void	print_all(const char * const format, ...)
{
	va_list			args;
	unsigned int	i, j;
	char			*sep = "";
	arg_t			functions[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		printf("%s", sep);
		while (functions[j].typeletter)
		{
			if (format[i] == functions[j].typeletter)
			{
				functions[j].fct(&args);
				break;
			}
			j++;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
}
