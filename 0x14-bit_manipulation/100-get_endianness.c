/**
 * get_endianness - Tells if system is little or big endian
 * Return: 1 if little endian, 0 if big endian
 */
int	get_endianness(void)
{
	unsigned int	i = 1;

	return (*((char *)&i));
}
