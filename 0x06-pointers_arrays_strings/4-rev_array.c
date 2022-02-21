/**
 * reverse_array - reverse values of an array
 * @a: array of integers
 * @n: size of array a
 * Return: a
 */
void	reverse_array(int *a, int n)
{
	int	i, tmp;

	i = 0;
	while (--n > i)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
