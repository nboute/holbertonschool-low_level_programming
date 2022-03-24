/**
 * set_bit - Sets value of a specific bit to 1
 * @n: Pointer to nubmer to change bit of
 * @index: Index of bit to modify
 * Return: 1 if it worked, -1 if an error occured
 */
int	set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	*n |= (1 << index);
	return (1);
}
