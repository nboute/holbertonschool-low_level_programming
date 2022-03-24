/**
 * get_bit - Tells value of a specific bit
 * @n: Number to find bits in
 * @index: Index of bit to search
 * Return: Value of bit at given index
 */
int	get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
