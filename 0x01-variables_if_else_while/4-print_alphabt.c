#include <stdio.h>

/**
 * main - function prints alphabet except for q and e
 * Return: returns 0
 */

int		main(void)
{
	char	c;

	c = 'a' - 1;
	while (++c <= 'z')
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
