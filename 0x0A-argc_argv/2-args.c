#include "main.h"


/**
 * _puts - prints string, followed by a newline
 * @str: string to print
 */
void	_puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * main - Prints arguments given to program
 * @ac: number of arguments
 * @av: array of arguments strings
 * Return: Always 0
 */
int		main(int ac, char **av)
{
	while (ac--)
		_puts(*(av++));
	return (0);
}
