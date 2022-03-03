#include <stdlib.h>
#include "main.h"

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
 * compute_buffer - computes preprocessed value in buffer
 * @r: buffer
 * @size_r: size of buffer
 * Return: 1 if overflow, 0 if not
 */
int		compute_buffer(char *r, int size_r)
{
	int	k, tenth;

	k = 0;
	tenth = 0;
	while (k < size_r && (r[k] || tenth))
	{
		if (tenth && !r[k])
			r[k] = 2;
		else if (tenth)
			r[k]++;
		tenth = 0;
		if (r[k] >= 11)
			tenth = 1;
		if (r[k])
			r[k] = (r[k] - 1) % 10 + '0';
		k++;
	}
	reverse_buffer(r, k);
	return (tenth);
}

/**
 * infinite_add - adds two numbers stored in strings together
 * @n1: first number's string
 * @n2: second number's string
 * @r: buffer to output result to
 * @size_r: size of buffer
 * Return: r
 */

char	*infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int	i, j, k;

	for (i = 0; i < size_r; i++)
		r[i] = 0;
	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	k = 0;
	while (i > 0 && k < size_r)
		r[k++] = n1[--i] - '0' + 1;
	k = 0;
	while (j > 0 && k < size_r)
	{
		j--;
		if (r[k])
			r[k] = (r[k] + n2[j] - '0');
		else
			r[k] = n2[j] - '0' + 1;
		k++;
	}
	if (compute_buffer(r, size_r))
		return (0);
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
 * infinite_mul - multiplies two numbers in string format
 * @n1: number 1
 * @n2: number 2
 * @sum: array to store result of multiplication
 * @temp: array to store temporary operations
 * @sum2: array to store current sum temporarily
 * @len: size of sum arrays
 */
void	infinite_mul(char *n1, char *n2, char *sum, char *temp, char *sum2,
	size_t len)
{
	int	i, j, nb;

	reverse_buffer(n1, _strlen(n1));
	reverse_buffer(n2, _strlen(n2));
	_strset(sum, len, '0');
	for (i = 0; n1[i]; i++)
	{
		for (j = 0; n2[j]; j++)
		{
			_strset(temp, len, '0');
			nb = (n1[i] - '0') * (n2[j] - '0');
			temp[len - 1 - (i + j)] = nb % 10 + '0';
			temp[len - 1 - (i + j + 1)] = nb / 10 + '0';
			_strcpy(sum2, sum);
			infinite_add(sum2, temp, sum, len);
		}
	}
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
	char	*result, *temp, *result2;

	if (ac != 3)
		return (_error());
	for (i = 0; av[1][i]; i++)
		if (av[1][i] < '0' || av[1][i] > '9')
			return (_error());
	size = i;
	if (!i)
		return (_error());
	for (i = 0; av[2][i]; i++)
		if (av[2][i] < '0' || av[2][i] > '9')
			return (_error());
	if (!i)
		return (_error());
	size += i;
	result = create_buffer(size);
	if (!result)
		return (_error());
	result2 = create_buffer(size);
	if (!result2)
		return (_error());
	temp = create_buffer(size);
	if (!temp)
		return (_error());
	infinite_mul(av[1], av[2], result, temp, result2, size);
	i = 0;
	while (result[i] && result[i] == '0' && result[i + 1])
		i++;
	_puts(result + i);
	free(result);
	free(result2);
	free(temp);
	return (0);
}
