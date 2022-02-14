/**
 * _atoi - converts string into an integer
 * @s: string to convert
 * Return: integer format of string
 */

int	_atoi(char *s)
{
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		nb = nb * 10 + (*s - '0');
		s++;
	}
	return (nb * sign);
}
