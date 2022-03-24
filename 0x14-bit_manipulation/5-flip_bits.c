/**
 * flip_bits - Tells number of bit flips needed to go from 1 number to another
 * @n: Number 1
 * @m: Number 2
 * Return: Amount of bit flips needed
 */
unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int	count;

	count = 0;
	while (n && m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >> 1;
		m >> 1;
	}
	return (count);
}
