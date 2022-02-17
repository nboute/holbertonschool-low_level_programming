#include <stdio.h>

/**
 * _isprint - checks if character is printable
 * @c: character
 * Return: 1 if printable, 0 if not.
 */
int		_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/**
 * print_buffer - prints a buffer by ascii and hex values
 * @b: buffer
 * @size: size of buffer
 */
void	print_buffer(char *b, int size)
{
	int	n;
	unsigned int	addr;

	addr = 0;
	while (size > 0)
	{
		printf("%08x: ", addr);
		n = 0;
		while (n < 10 && n < size)
		{
			printf("%x%x", b[n] / 16, b[n] % 16);
			if (n % 2)
				printf(" ");
			n++;
		}
		while (n < 10)
		{
			printf("  ");
			if (n % 2)
				printf(" ");
			n++;
		}
		n = 0;
		while (n < 10 && n < size)
		{
			if (_isprint(b[n]))
				printf("%c", b[n]);
			else
				printf(".");
			n++;
		}
		printf("\n");
		size -= 10;
		b += 10;
		addr += 10;
	}
}
