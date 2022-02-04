#include <stdio.h>

/**
 * main - function prints 3 digits numbers combinations
 * Return: return 0
 */

int main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (j != 1 || i != 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
