#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strlen - counts size of a string
 * @str: string to check size of
 * Return: returns size of str
 */
int	_strlen(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copy string's content into another
 * @dest: string to copy into
 * @src: string to copy from
 * Return: returns string where content was pasted
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _puts - prints string, followed by a newline
 * @str: string to print
 */
void	_puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 *	reverse_buffer - reverses buffer's value
 *
 * @r: buffer
 * @size: size of buffer
 * Return: r
 */

char	*reverse_buffer(char *r, int size)
{
	int	i, nb;

	i = 0;
	while (i < size)
	{
		size--;
		nb = r[i];
		r[i] = r[size];
		r[size] = nb;
		i++;
	}
	return (r);
}

/**
 * _error - prints error and returns error code
 * Return: Always 98
 */
int		_error(void)
{
	_puts("Error");
	return (98);
}

/**
 * _strset - sets array to given byte value
 * @str: array of chars
 * @len: length of array
 * @c: byte value to set array
 */
void	_strset(char *str, size_t len, char c)
{
	while (len--)
		*str++ = c;
}

/**
 * infinite_add - adds number to string of numbers
 * @sum: String of numbers
 * @nb: number to add
 * @index: decimal place of number
 * @len: length of sum string
 */
void	infinite_add(char *sum, int nb, int index, int len)
{
	int	tenth = 0;

	sum[index] += nb % 10;
	sum[index + 1] += nb / 10;
	while (index < len)
	{
		sum[index] += tenth;
		tenth = 0;
		if (sum[index] > '9')
			tenth = 1;
		sum[index] = (sum[index] - '0') % 10 + '0';
		index++;
	}
}

/**
 * infinite_mul - multiplies two numbers in string format
 * @n1: number 1
 * @n2: number 2
 * @sum: array to store result of multiplication
 * @len: size of sum arrays
 */
void	infinite_mul(char *n1, char *n2, char *sum, size_t len)
{
	int	i, j, nb;

	reverse_buffer(n1, _strlen(n1));
	reverse_buffer(n2, _strlen(n2));
	_strset(sum, len, '0');
	for (i = 0; n1[i]; i++)
	{
		for (j = 0; n2[j]; j++)
		{
			nb = (n1[i] - '0') * (n2[j] - '0');
			infinite_add(sum, nb, i + j, len);
		}
	}
	reverse_buffer(sum, len);
}

/**
 * create_buffer - creates a buffer of given size and initializes it
 * @size: size of buffer
 * Return: buffer
 */
char	*create_buffer(unsigned int size)
{
	char	*ptr;
	size_t	i;

	ptr = malloc((sizeof(*ptr) + 1) * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = '0';
	ptr[i] = '\0';
	return (ptr);
}

/**
 * main - checks for error and prepares variable for multiplication
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0
 */
int		main(int ac, char **av)
{
	unsigned int	i, size;
	char	*result;

	if (ac != 3)
		return (_error());
	for (i = 0; av[1][i]; i++)
		if (av[1][i] < '0' || av[1][i] > '9')
			return (_error());
	size = i;
	if (!i)
	{
		_puts("0");
		return (0);
	}
	for (i = 0; av[2][i]; i++)
		if (av[2][i] < '0' || av[2][i] > '9')
			return (_error());
	if (!i)
	{
		_puts("0");
		return (0);
	}
	size += i;
	result = create_buffer(size);
	if (!result)
		return (_error());
	infinite_mul(av[1], av[2], result, size);
	i = 0;
	while (result[i] && result[i] == '0' && result[i + 1])
		i++;
	_puts(result + i);
	free(result);
	return (0);
}
