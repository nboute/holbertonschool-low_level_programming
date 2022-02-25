#include "main.h"

/**
 * main - Prints name of executable
 * @ac: number of arguments
 * @av: array of arguments strings
 * Return: Always 0
 */
int		main(int ac, char **av)
{
	(void)ac;
	while (**av)
		_putchar(*(*av)++);
	_putchar('\n');
	return (0);
}
