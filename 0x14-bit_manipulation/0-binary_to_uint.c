/**
 * binary_to_uint - Converts binary string to unsigned int
 * @b: String containing binary number
 * Return: Decimal value or 0 if error
 */
unsigned int	binary_to_uint(const char *b)
{
	unsigned int	i, nb;

	if (!b)
		return (0);
	nb = 0;
	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		nb <<= 1;
		nb = nb + b[i] - '0';
		i++;
	}
	return (nb);
}
