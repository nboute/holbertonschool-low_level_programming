#include <stdio.h>

/**
 * main - function prints alphabet in lower and uppercase
 * Return: returns 0
*/

int main(void)
{
	char    c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');
	return (0);
}
