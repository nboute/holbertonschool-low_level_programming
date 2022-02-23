/**
 * _pow_recursion - Calculates number x raised to the power of y
 * @x: Number to raise
 * @y: Power of x
 * Return: @x exponent @y
 */
int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
