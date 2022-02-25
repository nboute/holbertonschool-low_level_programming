#include "main.h"

int		main(int ac, char **av)
{
	(void)ac;
	while (**av)
		_putchar(*(*av)++);
	_putchar('\n');
	return (0);
}
