#include <stdio.h>
#include <stdio.h>

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
	while (k < size_r - 1 && (r[k] || tenth))
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
	if (i >= size_r || j >= size_r)
		return (0);
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
