#include "function_pointers.h"

/**
 * print_name - Calls function given in parameter
 * @name: String to pass to @f
 * @f: Function to call
 */

void	print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
