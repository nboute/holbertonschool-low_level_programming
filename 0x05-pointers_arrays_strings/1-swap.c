/**
 * swap_int - swaps values of two variables using their adresses
 * @a: adress of first int
 * @b: adress of second int
 */
void	swap_int(int *a, int *b)
{
	int	tmp;

	if (!a || !b)
		return;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
