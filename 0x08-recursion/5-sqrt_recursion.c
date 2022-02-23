/**
 * calc_sqrt - Calculates square root of number recursively
 * @n: number to get sqrt of
 * @div: current dividend of @n
 * Return: Square root of @n
 */
int	calc_sqrt(int n, int div)
{
	if (n / div == div && n % div != 0)
		return (-1);
	if (n / div < div)
		return (calc_sqrt(n, div / 2));
	if (n / div > div)
		return (calc_sqrt(n, div + 1));
	return (div);
}

/**
 * _sqrt_recursion - Gets square root of number
 * @n: number to get sqrt from
 * Return: square root of @n
 */
int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (calc_sqrt(n, n / 2));
}
