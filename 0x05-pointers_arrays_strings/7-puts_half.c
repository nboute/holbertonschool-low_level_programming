#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to print
 */
void	puts_half(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		;
	i /= 2;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
