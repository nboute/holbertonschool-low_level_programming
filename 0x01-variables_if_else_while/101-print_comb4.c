#include <stdio.h>

/**
 * main - function prints 3 digits numbers combinations
 * Return: return 0
 */

int main(void)
{
	int		c;
	int		d;
	int		e;

	c = '0';
	while (c < '8')
	{
		d = c + 1;
		while (d < '9')
		{
			e = d + 1;
			while (e <= '9')
			{
				if (c != '0' || d != '1' || e != '2')
				{
					putchar(',');
					putchar(' ');
				}
				putchar(c);
				putchar(d);
				putchar(e);
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
