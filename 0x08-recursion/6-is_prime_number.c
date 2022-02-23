/**
 * calc_prime - Checks if number is prime recursively
 * @n: number
 * @div: divident to check number
 * Return: 1 if prime, 0 if not
 */
int	calc_prime(int n, int div)
{
	if (n / div < div)
		return (1);
	if (n % div == 0)
		return (0);
	return (calc_prime(n, div + 1));
}

/**
 * is_prime_number - Tells if number is prime
 * @n: Number to check
 * Return: 1 if prime, 0 if not
 */
int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc_prime(n, 2));
}
