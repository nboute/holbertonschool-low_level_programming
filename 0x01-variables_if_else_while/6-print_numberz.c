#include <stdio.h>

/**
 * main - function prints numbers
 * Return: return 0
 */

int main(void)
{
	int c;

	c = '0';
	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
