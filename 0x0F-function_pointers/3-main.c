#include "3-calc.h"

/**
 * main - Checks for error and then computes arugments
 * @ac: number of arguments
 * @av: Array of argument strings
 * Return: 0 if no error, other values otherwise
 */
int	main(int ac, char **av)
{
	int	nb1, nb2;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	f = get_op_func(av[2]);
	if (!f)
	{
		printf("Error\n");
		return (99);
	}
	nb1 = atoi(av[1]);
	nb2 = atoi(av[3]);
	if ((f == op_div || f == op_mod) && nb2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", f(nb1, nb2));
	return (0);
}
