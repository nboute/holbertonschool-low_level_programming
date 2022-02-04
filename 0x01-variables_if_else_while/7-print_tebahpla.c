#include <stdio.h>

/**
 * main - function prints alphabet
 *
 * Return: returns 0
*/

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
