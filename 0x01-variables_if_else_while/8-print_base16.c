#include <stdio.h>

/**
 * main - function prints numbers
 *
 * Return: return 0
 */

int main(void)
{
	char    c;

	c = '0';
	while (c <= '9')
		putchar(c++);
	c = 'a';
	while (c <= 'f')
		putchar(c++);
	putchar('\n');
	return (0);
}
