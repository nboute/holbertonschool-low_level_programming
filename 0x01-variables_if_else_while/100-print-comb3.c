#include <stdio.h>

/**
 * main - function prints 2 digits numbers combinations
 * Return: return 0
 */

int main(void)
{
	int		c;
	int		d;

	c = '0';
	while (c < '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			if (c != '0' || d != '1')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(c);
			putchar(d);
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
