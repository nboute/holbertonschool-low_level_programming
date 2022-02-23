/**
 * factorial - Calculates factorial of given number
 * @n: Number to get factorial of
 * Return: Factorial of @n
 */
int		factorial(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (1);
	return (n * factorial(n - 1));
}
