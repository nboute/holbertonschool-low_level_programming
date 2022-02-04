#include <stdio.h>

/**
 * main - function prints alphabet
 * Return: returns 0
*/

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
